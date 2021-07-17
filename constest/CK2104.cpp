#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> uoc;
bool kt(int a[],int l){
    int k=0;
    int i=0;
    for(int i=0;i<n;i++){
        k=k+a[i];
        if(k>l){
            return false;
        }
        else{
            if(k==l){
                k=0;
            }
        }
    }
    return true;
    // while(i<n){
    //     k=k+a[i];
    //     if(k>l){
    //         return false;
    //     }
    //     else{
    //         if(k==l){
    //             k=0;
    //         }
    //         i++;
    //     }
    // }
    // return true;
}
bool chien(int a[]){
    for(int i=0;i<uoc.size();i++){
        if(kt(a,uoc[i])==true){
            return true;
        }
    }  
        return false;//sai ngu
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1];
        string s;
        int sum=0;
        cin>>s;
        for(int i=0;i<s.size();i++){//n--->s.size()
            a[i]=s[i]-'0';
            sum=sum+a[i];
        }
        //uoc.push_back(1);//k quan trong
        for(int i=2;i*i<sum;i++){//i*i<=tong
            if(sum %i == 0){
                uoc.push_back(i);
                uoc.push_back(sum/i);
            }
        }
        if(chien(a)==true){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        uoc.clear();
   
    }
    return 0;
}