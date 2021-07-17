#include<bits/stdc++.h>
using namespace std;
// int k[1005];
const long long mod=1e9+7;
long long dp[1005][1005];
// long long gt(int n)
// {
//     if(k[n]==-1){
//         if(n<=1){
//             return 1;
//         }
//         else{
//         k[n]=gt(n-1)*n;
//         }
//     }
//     return k[n];
// }
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j||j==0)dp[i][j]=1;
            else dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            dp[i][j]%=mod;
        }
    }
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int m,n;
        cin>>m>>n;
        // for(int i=0;i<=m+1;i++){
        //     k[i]=-1;
        // }
        //cout<<(gt(m)%mod)/((gt(n)%mod)*(gt(m-n)%mod));
        cout<<dp[m][n]<<endl;
    }
    return 0;
    
}