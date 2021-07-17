// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b,N;
//         cin>>a>>b>>N;
//         if(a<0){
//             a=-a;
//         }
//         if(b<0){
//             b=-b;
//         }
//         long long temp= a+b;
//         if(temp==N){
//                 cout<<"YES"<<endl;
//         }
//         else if(temp<N && (N-temp)%2==0){
//                 cout<<"YES"<<endl;
//         }else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,N,x;
        cin>>a>>b>>N;
        if(a<0){
            a=-a;
        }
        if(b<0){
            b=-b;
        }
        // if(N<0){
        //     N=-N;
        // }
        x=a+b;
        if(x<=N){
            if((N-x)% 2==0)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}