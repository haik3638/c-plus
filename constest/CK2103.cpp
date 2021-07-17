#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a,b;
        cin>>a>>b;
        long long dogcoin;
        long long k=max(x,y);
        long long q=min(x,y);
        int s=k-q;
        long long sum=x+y;
        dogcoin=min((q*b)+(s*a),sum*a);//thay long long la dc

        

        cout<<dogcoin<<endl;
    }
    return 0;
}