#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+1];
        long long sum=0;
        int k;
        cin>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%(2*k)==0){
            cout<<"DRAW!"<<endl;
        }else{
            if(n%2==0){
                cout<<"BRIDE"<<endl;
            }
            else if((sum-a[0])%k!=0){
                cout<<"GROOM"<<endl;
            }else cout<<"BRIDE"<<endl;
        }
    }
    return 0;
}