#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while (t--)
    {
        
        string s;

        cin>>s;
        stack<string> sta;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
                string a = sta.top();sta.pop();
                string b = sta.top();sta.pop();
                string tmp = s[i]+b+a;
                sta.push(tmp);

            }
            else sta.push(string (1,s[i]));
        }
        cout<<sta.top()<<endl;
        
    }
    return 0;
}