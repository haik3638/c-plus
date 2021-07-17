// #include <bits/stdc++.h>
// using namespace std;
// int i,maxx;
// bool a[1002][1002];
// string s;
// int main()
// {   
//     int t;
//     cin>>t;
//     while (t--)
//     {
//     	cin>>s;

// 	for (int i=0 ; i<s.size(); i++) a[i][i]=true;
// 	for (int i=0 ; i<s.size()-1 ; i++) 
// 		if (s[i]==s[i+1]) 
// 		{ a[i][i+1]=true; a[i+1][i]=true; }

// // i la so phtu
// //j la chi so dau
// 	for (int i=3; i<=s.size(); i++)
// 		for (int j=0; j<s.size()-i+1 ; j++)
// 		{
// 			int c=j+i-1;
// 			if (a[j+1][c-1] && s[j]==s[c]) 
// 			{ a[j][c]=true; a[c][j]=true; }

// 			else 
//             { a[j][c]=false; a[c][j]=false; }
// 		} 
// 	    maxx=1;
// 	for (int i=0 ; i<s.size()-1 ; i++)
// 		for (int j=i ; j<s.size(); j++) 
// 			if (a[i][j]==true && maxx<j-i+1) maxx=j-i+1;
// 	cout<<maxx;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
bool dp[1005][1005];
int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int res =1;
        for(int i =0;i<s.size();i++){
            int u=i,v=i;
            while(u>=0 && v< s.size()){
                if(s[u]==s[v]){
                    res = max(res,v-u+1);
                    u--;
                    v++;
                }else break;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            int u=i,v=i+1;
            while(u>=0&&v<s.size()){
                if(s[u]==s[v]){
                    res = max(res,v-u+1);
                    u--;
                    v++;
                }else break;                
            }
        }
        cout<<res<<endl;
    }
}