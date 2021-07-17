#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>G;
vector<bool>visited;
int E;
void init(int V){
    G.resize(V+1);
    visited.resize(V+1,true);
}
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
            if(visited[v]){
                visited[v]=false;
                q.push(v);
                cout<<v<<" ";
            }
        }
    }
    
}
void slove(){
    int k,V;
    cin>>V>>E>>k;
    init(V);
    for(int i=0;i<V;i++){
        G[i].clear();
    }
    //memset(visited,false,sizeof(visited));
    
    // init();
    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    BFS(k);
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        
        slove();
    }
    return 0;
    

}