#include <iostream>
using namespace std;
int main() {
    int ba=0;//moc cot xang truoc do
	int a,f,k;
  long b;
  cin>>a>>b>>f>>k;
  if(a>b){//if(a>b&&((2*(a-f)>b)&&(k>=2)))
    cout<<-1;
  }else if(k>=2 && (2*(a-f))>b && 2*f>b){
      cout<<-1;
  }
  else{
  	int dem =0;
    while(k){
        int temp;
        int i;
        int vong=0;
        i=(b+ba)/ a;
        temp=(b+ba) %  a;
        k=k-i;
        vong =vong +i;
        if(k<1){
            break;
        }
        dem++;//them xang
        if(vong%2==1){
            if(temp <(a-f)){
                dem++;
                ba=-f;
            }
            
        }
        if(vong%2==0){
            if(temp<f){
                dem++;
                ba =f;
            }
        }
    }
    cout<<dem;
  }
	return 0;

}