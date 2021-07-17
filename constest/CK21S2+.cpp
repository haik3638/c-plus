
#include <iostream>
using namespace std;
const long long  mod=10e9 + 7;
   
/* The main function that returns the max possible product */
int maxProd(long long n)
{
   // n equals to 2 or 3 must be handled explicitly
   if (n == 2 || n == 3) return (n);
   
   // Keep removing parts of size 3 while n is greater than 4
   int res = 1;
   while (n > 4)
   {
       n -= 3;
       res *= 3;// Keep multiplying 3 to res
       res=res % mod; //module 10^9+7
   }
   return (n * res); // The last part multiplied by previous parts
}
   
/* Driver program to test above functions */
int main()
{
        ios_base::sync_with_stdio;
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

    
        cout << maxProd(n)<<endl;
    }
    return 0;
}