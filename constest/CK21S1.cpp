#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+2];
        int dem=0,dem1=0,dem2=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]>0){
                if(a[i]%3==0){
                    dem++;
                }
                else if(a[i]%3==1){
                    dem1++;
                }
                else dem2++;
            }
        }
        dem=dem+min(dem1,dem2);
        cout<<dem<<endl;
    }
    return 0;
}