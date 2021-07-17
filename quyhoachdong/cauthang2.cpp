#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 1;
const int K = 101;
const int MOD = 1e9 + 7;
int f[N][K];
int count(int n, int k,int ways){

if (n <= 1 ){
    return 1;
}
for (int i=1;i<= min(n, k) + 1;i++) {
    ways += count(n - i, k,ways);
}
return ways%MOD;
}
long countWay(int N, int K, long long[]listSolved)
{
    if(listSolved[N] > 0)
        return listSolved[N];
    if(N <= 1)
    {
        listSolved[N] = 1;
        return 1;
    }
    if(K > N)
        K = N;
    long count = 0;
    for(int i = 1; i <= K; i += 1)
        count += countWay(N - i, K,listSolved);
    listSolved[N] = count;
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >>n>>k;
        cout<<count(n,k,0)<<endl;
    }
    return 0;
}