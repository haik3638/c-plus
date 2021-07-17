#include<bits/stdc++.h>
using namespace std;
vector<int >dem;
int demxau=0;
bool test(int n,int k,int a[] ){
    int s=0, dem0=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) dem0=0;
        if(a[i]==0) { 
            dem0++;
            if(dem0==k) {
                if(a[i+1]==1||i==n){
                s++;
                } 
                else dem0=0;               
            }
        } 
    }
        if(s==1) {
            for(int i=1;i<=n;i++){
                dem.push_back(a[i]);
            }
            return 1;
        }
        return 0;
}
void try1(int i,int n,int k,int a[]){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            if(test(n,k,a)){
                demxau++;
            };
            // int count=0;
            // for(int l=1;l<=n;l++){
            //     if(a[l]==1){
            //         count ++;
            //     }
            // }
            // if(count ==k){
            //     for(int l=1;l<=n;l++){
            //         cout<<a[l];
            //     }
            //     cout<<endl;
            // }
        }
        else try1(i+1,n,k,a);
    }
}
int main(){
            ios::sync_with_stdio(false); cin.tie(0);

        int n,k;
        cin>>n>>k;
        int a[n+1];
        try1(1,n,k,a);
        cout<<demxau;
    for(int i=0;i<dem.size();i++){
        if(i%n==0){
            cout<<endl;
        }
        if(dem[i]==0){
            cout<<"A"<<" ";
        }
        if(dem[i]==1){
            cout<<"B"<<" ";
        }
          
    }
    
    return 0;
    
}