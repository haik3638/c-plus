
#include <bits/stdc++.h>
using namespace std;
const long long  mod=10e9 + 7;
// method return x^a in log(a) time
long long power(int a, long long n)
{
    if(n==0){
        return 1;
    }
    // if(n==1){
    //     return a;
    // }
    int x =power(a,n/2) % mod;
    if(n%2==0) return x*x % mod;
    else
    return x*(x*a % mod)%mod;
}
// int power(int x, int a)
// {
//     int res = 1;
//     while (a) {
//         if (a & 1)
//             res = res * x;
//         x = x * x;
//         a >>= 1;
//     }
//     return res;
// }
long long breakInteger(long long N)
{
    //  base case 2 = 2
    if (N == 2)
        return 2;
 
    //  base case 3 = 3
    if (N == 3)
        return 3;
 
    int maxProduct;
 
    //  breaking based on mod with 3
    switch (N % 3) {
    // If divides evenly, then break into all 3
    case 0:
        maxProduct = power(3, N / 3);
        break;
 

    case 1:
        maxProduct = 2 * 2 * power(3, (N / 3) - 1);
        break;
 

    case 2:
        maxProduct = 2 * power(3, N / 3);
        break;
    }
    return maxProduct;
}
 
//  Driver code to test above methods
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==0){
            cout<<0<<endl;
        }
        else cout << breakInteger(n)<<endl;
    }
    return 0;
}