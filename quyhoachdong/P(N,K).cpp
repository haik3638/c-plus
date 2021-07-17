// #include<bits/stdc++.h>
// using namespace std;
// long long k[1005]={-1};
// const long long mod=1e9+7;
// long long gt(int n)
// {
//     if(k[n]==-1){
//         if(n<=1){
//             return 1;
//         }
//         else{
//         k[n]=gt(n-1)*n;
//         k[n]%=mod;
//         }
//     }
//     return k[n];
// }
// // long long P(int n,int k){
// //    if(n=n-k+1){
// //        return n-k+1;
// //    }
// //    else return P(n-1,k)*n%mod;
// // }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
       
//         if(m>n){
//             cout<<0<<endl;
//         }
//         else{
//             // for(int i=0;i<=n+1;i++){
//             //     k[i]=-1;
//             // }
//             long long a;
//             a=gt(n);
//             long long b=gt(n-m);
//             cout<<a/b<<endl;
//             // cout<<P(n,m)<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const long long mod =1e9+7;
int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        long long res=1;
        if(k>n)res =0;
        for(int i=n-k+1;i<=n;i++){
            res=(res*i)%mod;

        }
        cout<<res<<endl;
    }
    
} 