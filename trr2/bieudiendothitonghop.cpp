#include<bits/stdc++.h>
//#include <cstdlib>
using namespace std;
int main(){
    int k;
    cin>>k;
    cout<<k<<endl;
    int G[200][200];
    for(int i=0;i<k;i++){
        int j=sqrt(k*k*0.1);
        for(int m=0;m<j;m++){
            int res=rand()%(k-0+1)+0;
            G[m][res]=1;
            //cout<<res<<' '<<j;
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}