
#include <bits/stdc++.h>
using namespace std;
const long long  mod=1e9 + 7;
long long n,k;
// method return x^a in log(a) time
long long mul(long long a,long long b){
    if(b==0){
        return 0;
    }
    long long tmp=mul(a,b/2);
    if(b&1){
        return (tmp*2+a)%mod;
    }
    return tmp*2%mod;
}
long long power(long long  n, long long k)
{   
    if(k==0){
        return 1;
    }
    if(k==1){
        return n%mod;
    }
    long long tmp =power(n,k/2) ;
    long long x = mul(tmp,tmp);
    if(k%2==0) return x%mod;
    else
    return x*n%mod;
}
int main(){
       ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        //long long a,b;
        cin>>n>>k;
        cout<<power(n,k)<<endl;
    }
    return 0;
}