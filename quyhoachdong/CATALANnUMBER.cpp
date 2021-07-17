#include <iostream>
using namespace std;
  
// A dynamic programming based function to find nth
// Catalan number
unsigned long int catalanDP(unsigned int n)
{
    // Table to store results of subproblems
    unsigned long int catalan[n + 1];
  
    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;
  
    // Fill entries in catalan[] using recursive formula
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
  
    // Return last entry
    return catalan[n];
}
  
// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        cout<<catalanDP(k)<<endl;
    }
    return 0;
}
 
// #include <bits/stdc++.h>
// using namespace std; 
 
// unsigned long int catalanNumber (unsigned int n ) { 
//     unsigned long int dp[n+1]; 
//     dp[0] = dp[1] = 1; 
//     for (int i=2; i<=n; i++) { 
//         dp[i] = 0; 
//         for (int j=0; j<i; j++) 
//             dp[i] += dp[j] * dp[i-j-1]; 
//     } 
//     return dp[n]; 
// } 
// int main() {
// 	int t; cin >> t;
// 	while(t--) {
// 		unsigned int n;
// 		cin >> n;
// 		cout << catalanNumber(n) << endl;
// 	}
// 	return 0;
// }