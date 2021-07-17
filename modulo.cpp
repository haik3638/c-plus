#include<bits/stdc++.h>
using namespace std;
const long long mod=10;
int main(){
    int a;
    int i;
    cin>>a>>i;
    int x=((a%mod)*(i%mod))%mod;
    int sum=(a+i)%mod;
    //int sub=(a-i)%mod;
    int sub=((a-i)%mod+mod)%mod;
    cout<<sub<<endl;
    return 0;
}