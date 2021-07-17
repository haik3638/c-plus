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
    for(int i=0;i<n;i++){
        int temp;
        int k;
        k=i;
        temp=a[i];
        while(k>0&&a[k-1]>temp){
            a[k]=a[k-1];
            k--;
        }
        a[k]=temp;

        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++){
            cout<<a[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}