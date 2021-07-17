// #include <bits/stdc++.h>
// using namespace std;
// long long F[100];
// char fibo(int n,long long k){
//     if(n==1) return 'A';
//     if(n==2) return 'B';
//     if(k<=F[n-2]) {return fibo(n-2,k); }
//     return fibo(n-1,k-F[n-2]);
// }
// int main(){
//     F[1]=1;
//     F[2]=1;
//     for(int i=3;i<93;i++){
//         F[i]=F[i-1]+F[i-2];
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int i;
//         long long k;
//         cin>>i>>k;
//         cout<<fibo(i,k)<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--)
	{
    int n; cin >> n; int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    bool check = false; int left = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1 || a[i] == n){
            if(check == false) {check = true; left = i;}
            else  cout << min(n-left+1, min(i, left+n-i+1))<<endl;;
        }
    }
	}
}
