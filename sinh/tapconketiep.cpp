#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int x[k+1];
        for(int i=1;i<=k;i++){
            cin>>x[i];
        }
        for(int i=k;i>=0;i--){
            if(x[i]<n-k+i){
                x[i]=x[i]+1;
                for(i;i<k;i++){
                    x[i+1]=x[i]+1;
                }
                for(int i=1;i<=k;i++){
                    cout<<x[i]<<" ";
                }
                cout<<endl;
            break;
            }
            if(i==0){
                for(int j=1;j<=k;j++){
                    cout<<j<<" ";
                }
                cout<<endl;
            } 
        }
        // for(int i=1;i<=k;i++){
        //     cout<<x[i]<<" ";
        // }
        // cout<<endl;
    }
    return 0;
    
}