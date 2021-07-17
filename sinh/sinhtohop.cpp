#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int a[100];
        for(int i=1;i<=k;i++){
            a[i]=i;
            cout<<a[i];
        }
        // bool dung=true;
        while (true)
        {
          cout<<" ";
        int i=k;
        while(i>0&&a[i]==n-k+i) i--;
        if(i>0){
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
        }
        else {
            // dung =false;
        break;
        }
        for(int j=1;j<=k;j++){
            cout<<a[j];
        }
        }
        
        // do{
        // cout<<" ";
        // int i=k;
        // while(i>0&&a[i]==n-k+i) i--;
        // if(i>0){
        //     a[i]++;
        //     for(int j=i+1;j<=k;j++){
        //         a[j]=a[j-1]+1;
        //     }
        // }
        // else {dung =false;
        // break;
        // }
        // for(int j=1;j<=k;j++){
        //     cout<<a[j];
        // }
        
        // }
        // while(dung == true);
        cout<<endl;
    }
    return 0;
    
}