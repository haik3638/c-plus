#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a[1000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];     
        }
        bool k=false;
        for(int i=0;i<n-1;i++){
            k= false;
            for(int j=0;j<n-i-1;j++){

                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    k=true;
                }
            }
            if(k==false){
                break;
            }
        // cout<<"Buoc "<<i+1<<": ";
        // for(int j=0;j<n;j++){
        //     cout<<a[j]<<' ';
        // }
        }  
        
        for(int i=0;i<n/2;i++){
            cout<<a[n-i-1]<<" "<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}