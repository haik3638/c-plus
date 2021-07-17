#include<bits/stdc++.h>
using namespace std;
int res,n,k;
int a[30][30];
int x[30];
bool ok[30];
vector<int > res1;
void try1(int i){
    for(int j=1;j<=n;j++){//duyet to hop
        if(!ok[j]){
            x[i]=j;
            ok[j]=true;
            if(i==n){
                res=0;
                for(int l=1;l<=n;l++){
                    res+=a[l][x[l]];//dieu kien cua tong
                }
                if(res ==k){
                    for(int l=1;l<=n;l++){
                        res1.push_back(x[l]);
                    }
                }
            }
            else try1(i+1);
            ok[j]=false;
        }
    }
}
int main(){
               ios::sync_with_stdio(false); cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    try1(1);
    cout<<res1.size()/n;
    for(int i=0;i<res1.size();i++){
        if(i%n==0){
            cout<<endl;
        }
        cout<<res1[i]<<" ";
    }

}