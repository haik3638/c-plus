#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        stack<char>sta;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%')
                sta.push(s[i]);
            else 
                if(s[i]==')'){
                    while(sta.top()!='('){
                        cout<<sta.top();
                        sta.pop();
                    }
                sta.pop();
                sta.pop();    
                }else cout<<s[i];

        }
        cout<<endl;
    }
    return 0;
}