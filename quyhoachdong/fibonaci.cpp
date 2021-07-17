#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long F[100000000];

// long long fibonaci(int n){
//     if(F[n]==-1){
//         if(n<=1){
//             return n;
//         }
//         else
//             F[n]=fibonaci(n-1)+fibonaci(n-2);      
//     }
//     return F[n];
// }

int main(){
    int m=1e9+7;
    int t;
    cin>>t;
    F[0]=0;
    F[1]=1;
    for(int i=2;i<m;i++){
        F[i]=F[i-1]+F[i-2];
    }
    while(t--){   
        int k;
        cin >>k;
        // for(int i=0;i<=k+1;i++){
        //     F[i]=-1;
        // }
        cout<<F[k]<<endl;
        // cout<<fibonaci(k)%m<<endl;
        
    }
    return 0;

}