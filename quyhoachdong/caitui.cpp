#include<bits/stdc++.h>
using namespace std;
int n,M;
// pair<int ,int > k[105];
struct dat{
    int w=0,v=0;
};
dat k[1005];
int dp[1005][1005];//goi hang khoi luong j co gia tri mang theo la i

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int res=0;
    cin>>n>>M;
    for(int i=1;i<=n;i++){//nhap the tich
        cin>>k[i].w;  
    }
    for(int i=1;i<=n;i++){//nham gia tri
        cin>>k[i].v;  
    }   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j<k[i].w)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-k[i].w]+k[i].v);
            res =max(res,dp[i][j]);
        }
    }
    
    cout<<res<<endl;
    }
    return 0;

}
