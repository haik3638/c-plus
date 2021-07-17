// #include<bits/stdc++.h>
// using namespace std;
// string s;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         cin>>s;
//         for(int i=s.size()-1;i>=0;i--){
//             if(s[i]=='0'){
//                 s[i]='1';
//                 break;
//             } 
//             for(int j=i;j<s.size();j++){
//                 s[j]='0';
//             }
               
//         }
//         cout<<s<<endl;
//         // for(int i=0;i<s.size();i++) {
//         //     cout<<s[i];
//         // }
//         // cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
string s;
void next () {
    int i;
           for(i=s.length()-1;i>=0;i--) {
               if (s[i]=='0') {
                   s[i]='1';
                   break;
               }
           }
           for(int j=i+1;j<s.length();j++) {
               s[j]='0';
           }
}



int main() {
    int T;
    cin>>T;
    while(T--) {
        //string str;
        cin>>s;
        next();
        cout<<s<<endl;
    
         }
}
