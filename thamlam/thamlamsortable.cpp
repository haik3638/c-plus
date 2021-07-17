    #include <iostream>
    using namespace std;
    // int used[100]={0};
    // int c[100][100];
    // int x[100];
    // int b;
    void greedy(int c[100][100],int x[],int used[],int n){
        int i=0;
        while(i<n){
            i++;
            int b=999999;
            for(int j=1;j<n;j++){
                if(used[j]==0&&c[x[i-1]][j]<b){
                    b=c[x[i-1]][j];
                }
            }
            x[i]=b;
            used[i]=1;
        }
    }
    int main() { 
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        int t; 
        cin >> t;
        while(t--) {
            int n,k;
            cin>>n>>k;
            int visted[n+1]={1};
            int c[100][n+1];
            int x[n+1];
            
            for(int i=1;i<=n;i++){
                visted[i]=1;
                x[i]=1;
                for(int j=1;j<=n;j++){
                    cin>>c[i][j];
                }
            }
            greedy(c,x,visted,n);
            for(int i=1;i<=n;i++){
                cout<<x[i];
            }

        }   
        return 0;
    }
    //dao mang=ben phai dao sang ben trai
    //1 vi tri i co the o 1 trong 2 vij tri i hoac n-i-1-----sap xep roi kiem tra a[i]thuoc [i,n-i-1]