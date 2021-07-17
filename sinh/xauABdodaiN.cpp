
 
#include<iostream>
#include<math.h>
using namespace std;
 
void gen(int A[], int n) {
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        if(A[i]==0)cout<<"A";
        else cout<<"B";
    cout << " ";
}
 
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
    
    
    int n;
    
    cin >> n;
    //Khởi tạo mảng
    int *A = new int[n];
    //Xây dựng cấu hình đầu tiên
    for (int i = 0; i < n; i++) A[i] = 0;
    //In cấu hình hiện tại và xây dựng cấu hình kế tiếp
    for (int i = 0; i < pow(2, n); i++) {
        xuat(A, n);
        gen(A, n);
    }
    cout<<endl;
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// int a[100];
// void try1(int i,int n){
//     for(int j=0;i<=1;j++){
//         a[i]=j;
//         if(i==n){
//             for(int j=1;j<=n;j++){
//                 if(a[j]==0){
//                     cout<<"A";
//                 }else cout<<"B";
//             }
//             cout<<" ";
//         }else try1(i+1,n);
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int k;
//         cin>>k;    
//         for(int i=1;i<=k;i++){
//             a[i]=0;
//         }
//         try1(1,k);
//         cout<<endl;
//     }
//     return 0;
// }