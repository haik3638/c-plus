#include<bits/stdc++.h>
using namespace std;
int main(){
        ios_base::sync_with_stdio;
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m=0;
        cin>>n;
        int q,k,x,y,p=(n+1)/2;
        int a[1205];        
        for(int l=1;l<=n;l++){
            cin>>a[l];
            if(a[l]==1){
                q=l;
                x=min(l,n-l+1);
            }
            if(a[l]==n){
                k=l;
                y = min(l,n-l+1);
            }
        }
    // int tmp;
    // if (i<j){
    // 	tmp = min(j,n-i+1);
    // 	tmp = min(tmp,i+n-j+1);
	// }
	// if (j<i){
	// 	tmp = min(i,n-j+1);
	// 	tmp = min(tmp,j+n-i+1);
	// }
	// cout<<tmp<<endl;
        if((q<(p+1) && k<(p+1))||(q>p && k>p)){///t hoi cai nay nhe
        
            cout<<max(x,y)<<endl;
        }
        else{
            m=min((n-x+1),(n-y+1));
            m=min(m,(x+y));          
            cout<<m<<endl;
        }
    }
    return 0;
}
        // if(k>q){
        //     if((k-q)>max(x,y)){
        //         m=x+y;  
        //         cout<<m<<endl;
        //     }else if(x==y){
        //         m=max(x,y)+1;
        //         cout<<m<<endl;
        //     }else{
        //         cout<<max(x,y)<<endl;
        //     }
        // }
        // else{
        //     if((q-k)>=min(x,y)){
        //         m=x+y;
        //         cout<<m<<endl;
        //     }else if(x==y){
        //         m=max(x,y)+1;
        //         cout<<m<<endl;
        //     }else{
        //         cout<<max(x,y)<<endl;
        //     }
        // }