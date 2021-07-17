#include<bits/stdc++.h>
using namespace std;
int main(){
                ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int d[10000]={0};
        int res =0;
        for(int i=0;i<s.size();i++){
            d[s[i]]++;//dem phan tu xuat hien nhieu nhat
            if(res<d[s[i]]){
                res =d[s[i]];
            }
        }
        if(res<=s.size()-res&&s.size()%2==0){//s chan thi res<=s.size-res
            cout<<1;
        }
        else if(res<=(s.size()/2+1)&&s.size()%2==1){//s le thi res<=s.size/2 +1
            cout<<1;
        }
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}