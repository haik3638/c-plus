#include <bits/stdc++.h>
using namespace std;
long long F[100];
char fibo(int n,long long k){
    if(n==1) return '0';
    if(n==2) return '1';
    if(k<=F[n-2]) return fibo(n-2,k); 
    return fibo(n-1,k-F[n-2]);
}
int main(){
    F[1]=1;
    F[2]=1;
    for(int i=3;i<93;i++){
        F[i]=F[i-1]+F[i-2];
    }
    int t;
    cin>>t;
    while(t--){
        int i;
        long long k;
        cin>>i>>k;
        cout<<fibo(i,k)<<endl;
    }
    return 0;
}