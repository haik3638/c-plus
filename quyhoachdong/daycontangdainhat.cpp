#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1005],f[1005];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int result = 1;
    for (int i=1; i<=n; i++) {
        f[i] = 0;
        for (int j=0; j<i; j++) if (a[j] < a[i]) {
            f[i] = max(f[i], f[j] + 1);
        }
        result = max(result, f[i]);
    }
    cout<<result;  
    return ;  
}


// #include <stdio.h>
// #include <algorithm>
// using namespace std;
// //#define nmax=1000
// int n;
// int a[1000], f[1000];
// int main()
// {
//     scanf("%d",&n);
//     int i,j;
//     for (i=1; i<=n; i++)
//     {
//         scanf("%d",&a[i]);
//         f[i]=1;
//     }
//     for (i=1; i<=n; i++)
//     {
//         for (j=i+1; j<=n; j++)
//         {
//             if (a[i]<a[j]) f[j]=max(f[i]+1,f[j]);
//         }
//     }
//     int res=0;
//     for (i=1; i<=n; i++) res=max(res,f[i]);
//     printf("%d",res);
//     return 0;
// }