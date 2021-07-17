#include<bits/stdc++.h>
using namespace std;
vector<int>G[1005];
bool visited[1005];
void BFS(int u){
    queue<int>q;
    q.push(u);
    visited[u]=false;;
    cout<<u<<" ";
    while (!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(visited[v]==true){
                visited[v]=false;
                q.push(v);
                cout<<v<<" ";
            }
        }
    }
    
}
int main(){
     ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,e,u;
        cin>>n>>e>>u;
        for(int i=0;i<=1001;i++){
            G[i].clear();
        }
        memset(visited,true,sizeof(visited));
       
        for(int i=0;i<e;i++){
            int b,c;
            cin>>b>>c;
            G[b].push_back(c);  
        }
         for(int i=1;i<=n;i++){
            sort(G[i].begin(),G[i].end());
        }
        BFS(u);
        cout<<endl;
    }
    return 0;
}

