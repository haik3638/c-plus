#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];     
    }
    for(int i=0;i<n-1;i++){
        int m;
        int min=a[i];
        for(int j=i+1;j<n;j++){
            //int min=a[i];
            if(min>a[j]){
                m=j;
                min=a[j];
            }
        }
        int temp=a[i];
        a[i]=a[m];
        a[m]=temp;
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++){
            cout<<a[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}