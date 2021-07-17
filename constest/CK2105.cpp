#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N,K;
        cin>>N>>K;
        vector<long long >n;//chua uoc be   
        vector<long long >k;//chua uoc lon
        long long i=1;
        while(i*i<=N){
            if(N%i==0){
                n.push_back(i);
                k.push_back(N/i);
            }
            i++;
        }
        int m=n.size();
        if(n[m-1]==k[m-1]){//so sanh neu N la so binh phuong thi tru di 1 uoc vi du 49=7*7
            k.pop_back();
        }
        
        // for(int i=0;i<n.size();i++){
        //     cout<<n[i]<<"  "<<k[i]<<"  ";
        // }
        int l;
        l=m+k.size();//l la tong so uoc cua N
        //cout<<n.size()<<"  "<<k.size();
        if(K>l){
            cout<<-1<<endl;
        }
        else if(K <=m){
            cout<<n[K-1]<<endl;
        }
        else cout<<k[l-K]<<endl; //k>uoc be thuoc n
        n.clear();
        k.clear();
    }
    return 0;
}
// vector<int> uoc, cou;
//             uoc.push_back(1);
//             cou.push_back(n);
//             for(int i = 2; i*i <= n; i++){
//                 if(n%i==0) {uoc.push_back(i);
//                     if(i*i!=n)
//                         cou.push_back(n/i);
//                 }
//             }
//             // 2*uocsize > vt cout -1
//             int S = uoc.size();
//             if(vt > 2*S) cout << -1 <<endl;
//             else if(vt > S){
//                 int l = vt-S;
//                 cout << cou[S-l] << endl;
//             }
//             else cout << uoc[vt-1] << endl;