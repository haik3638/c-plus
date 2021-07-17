#include<bits/stdc++.h>
#include<stdlib.h>
#include <sstream>
using namespace  std;
int main(){
    unsigned long a,b,min,max;
    cin>>a>>b;
    string s1,s2;        
    ostringstream c1,c2;   
    c1<< a;
    c2<<b;      
    s1= c1.str();
    s2=c2.str();
    // string s1 = to_string(a);
    // string s2 = to_string(b);
    for(int i=0;i<=s1.size();i++){
        // if(s1[i]=='5'){
        //     s1[i]='6';
        // }
        if(s1[i]=='6'){
            s1[i]=='5';
        }
    }
    for(int j=0;j<=s2.size();j++){
        // if(s2[j]=='5'){
        //     s2[j]='6';
        // }
        if(s2[j]=='6'){
            s2[j]=='5';
        }
    }
    unsigned long num1=0,num2=0;
    for(int i = s1.size()-1; i >= 0;--i){
        num1 += (int)(s1[i] - '0') * pow(10, s1.size()-i-1);
    }
    for(int i = s2.size()-1; i >= 0;--i){
        num2 += (int)(s2[i] - '0') * pow(10, s2.size()-i-1);
    }
    min=num1+num2;
    for(int i=0;i<=s1.size();i++){
        if(s1[i]=='5'){
            s1[i]='6';
        }  
    }    
    for(int j=0;j<=s2.size();j++){
        if(s2[j]=='5'){
            s2[j]='6';
        }    
    }
    unsigned long num3=0,num4=0;
    for(int i = s1.size()-1; i >= 0;--i){
        num3 += (int)(s1[i] - '0') * pow(10, s1.size()-i-1);
    }
    for(int i = s2.size()-1; i >= 0;--i){
        num4 += (int)(s2[i] - '0') * pow(10, s2.size()-i-1);
    }
    max=num3+num4;
    cout<<min<<" "<<max<<endl;
}

