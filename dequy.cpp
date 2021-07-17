#include<iostream>
using namespace std;
int k=1;
int demso(int n){int dem=0;
    if(n<10){
        return 1;
    }
    else{
        return demso(n/10)+1;
    }
}
int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n*giaithua(n-1);
}
int fibonaci(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return fibonaci(n-1)+fibonaci(n-2);
    }
}
int ucln(int n, int m){
    if(m==0){
        return n;
    }
    return ucln(m,n%m);
}
/*int palinndrome(string s,int n,int m){
    if(m<1){
        return 1;
    }
    if(s[n]!=s[m]){
        return palinndrome(s,n,m);
    }

}*/
int main(){
    int n;
    cin>>n;
    cout<<demso(n);
    return 0;
}
