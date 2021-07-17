#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y,temp1,temp2,cout1=0,cout2=0;
        char a,b;
        cin>>x>>y>>a;
        temp1=y;
        b=a;
        cin>>x>>y>>a;
        temp2=y;
        for(int i=3;i<=n;i++){
            cin>>x>>y>>a;
            if(x == temp1&& a == b){
                cout1++;
                temp1=y;
            }
            if(x== temp2&&a != b){
                cout2++;
                temp2=y;
            }
        }
        if(cout1==cout2){
            cout<<1<<endl;
            
        }else cout<<"0"<<endl;
        cout<<cout1<<" "<<cout2;
    }
    return 0;
}