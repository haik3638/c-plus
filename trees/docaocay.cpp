#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,u,v,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n]={0};
        for(int i=1;i<n;i++){
            cin>>u>>v;
            a[v] = a[u]+1;
        }
        sort(a+1,a+n+1);//a+1->a+n+1;
        cout<<a[n]<<endl;
    }
    return 0;
}