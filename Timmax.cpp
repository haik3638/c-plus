#include<bits/stdc++.h>
using namespace std;
int max(int A[],int left,int right){
    if(left==right){
        return A[left];
    }
    int m;   
    m=(left+right)/2;
    int u=max(A,left,m);
    int v=max(A,m+1,right);
    if(u>v)
        return u;
    else
        return v;
}
// void qs(int A[],int l,int r){
//     int i=l;
//     int j=r;
//     int x=A[(l+r)/2];
//     do{
//         while(A[i]<x&&i<r){
//             i++;    
//         }
//         while(A[j]>x&&j>l){
//             j--;
//         }
//         if(i<=j){
//             swap(A[i],A[j]);
//         }
//         i++;
//         j--;
//     }while(i<=j);
//     if(l<i){
//         qs(A,l,j);
//     }
//     if(i<r){
//         qs(A,i,r);
//     }
// }
int main(){
    int A[100]={0,5,6,8,7,11,4,10,7};
    int l,r;
    l=0;
    r=9;
    cout<<max(A,l,r);
    // qs(A,l,r);
    // for(int i=0;i<r;i++){
    //     cout<<A[i];
    // }

}