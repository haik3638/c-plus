#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> sta;
    string s;
    while(cin>>s){
        int n;
        if(s=="push"){
            cin>>n;
            sta.push(n);
        }
        if(s=="pop"){
            sta.pop();
        }
        if(s=="show"){
            if(sta.empty()){
                cout<<"empty"<<endl;
                continue;
            }
            else{
                vector<int>a;
                while(!sta.empty()){
                    a.push_back(sta.top());
                    sta.pop();
                }
                for(int i=a.size()-1;i>=0;i--){
                    cout<<a[i]<<" ";
                    sta.push(a[i]);
                }
                cout<<endl;

            }
        }
    }
    return 0;
}