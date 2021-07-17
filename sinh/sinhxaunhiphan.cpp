#include<bits/stdc++.h>
using namespace std;
int a[100];
void try1(int i,int n){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            for(int j=1;j<=n;j++){
                cout <<a[j]<<" ";
            }
            cout<<endl;
        }
        else try1(i+1,n);
    }
}
int main(){
    int n;
    cin>>n;
    try1(1,n);
    return 0;
}