// #include<bits/stdc++.h>
// using namespace std;
// int C1(int k, int n){
//  if (k == 0 || k == n)return 1;
//  return C1(k, n - 1) + C1(k - 1, n - 1);
// }
// int main(){
//     int n;
//     cin>>n;
//     while (n--){
//         int m,n;
//         cin>>m>>n;
//         cout<<C1(m,n)<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

long long  ToHop(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	return (ToHop(n - 1, k - 1) + ToHop(n - 1, k));
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n, k, KetQua;
        int mod=1000000007;
        cin>>n;
	    cin>>k;
	
    	KetQua = ToHop(n, k)%mod;
	    cout<<KetQua<<endl;
    }
    

	return 0;
}