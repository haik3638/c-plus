#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long dp[1005]={0};
int main(){
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=1000;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }

}