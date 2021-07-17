#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        stack<string>sta;
        string s;
        cin>>s;
        //len=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='^'||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'){
                string a=sta.top();sta.pop();
                string b=sta.top();sta.pop();
                string tmp=s[i]+b+a;
                sta.push(tmp);

            }
            else sta.push(string (1,s[i]));
        cout<<sta.top()<<endl;
        }
    }
    return 0;
}