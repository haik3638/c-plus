#include<bits/stdc++.h>
using namespace std;
void try1(int i,int n,int k,int a[]){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int count=0;
            for(int l=1;l<=n;l++){
                if(a[l]==1){
                    count ++;//dem so 1 co trong xau
                }
            }
            if(count ==k){//neu co du so 1 thi in ra
                for(int l=1;l<=n;l++){
                    cout<<a[l];
                }
                cout<<endl;
            }
        }
        else try1(i+1,n,k,a);
    }
}
int main(){
            ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while (t--){

        int n,k;
        cin>>n>>k;
        int a[n+1];
        try1(1,n,k,a);
    }
    return 0;
    
}