#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
struct matrix
{
    long long pos[2][2];
};
matrix multi(matrix a , matrix b,int n )
{    
    matrix res ;
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ; j++)
		{
            res.pos[i][j] = 0;
            for(int h =0 ; h < n; h++)
                res.pos[i][j] =( res.pos[i][j]+a.pos[i][h]*b.pos[h][j] % mod ) % mod ;
        }
    }
    return res;
}
matrix powermod(matrix a ,int b,int n)
{
    if ( b == 1) return a ;
    if ( b % 2 == 0) return powermod (multi(a,a,n),b/2,n);
    return multi(a,powermod(multi(a,a,n),b/2,n),n);
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int k;cin>>k;
		matrix a;
		a.pos[0][0]=1;
		a.pos[0][1]=1;
		a.pos[1][0]=1;
		a.pos[1][1]=0;
		
		matrix b=powermod(a,k,2);
		cout<<b.pos[1][0]<<endl;
	}
	return 0;
}
