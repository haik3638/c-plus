#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a[101],vxuoi[101],vnguoc[101],m=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            vxuoi[i]=vnguoc[i]=a[i];
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<i;j++){
                if(a[j]<a[i]&&vxuoi[j]+a[i]>vxuoi[i]){
                    vxuoi[i]=vxuoi[j]+a[i];
                }
            }
        }
    }
    
}