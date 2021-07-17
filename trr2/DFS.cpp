#include<bits/stdc++.h>
using namespace std;

vector<int>G[1005];
bool visited[1005];
// vector<vector<int>>G;
// vector<bool>visited;
// int V,E;
// void init(){
//     G.resize(V+1);
//     visited.resize(V+1,true);
// }
void DFS(int u){
    visited[u]=true;
    // visited[u]=false;
    cout<<u<<" ";
    // while (!q.empty())
    // {
    //     u=q.front();
    //     q.pop();
    for(int i=0;i<G[u].size();i++){
        if(visited[G[u][i]]==false){
            DFS(G[u][i]);
        }
            // int v=G[u][i];
            // if(visited[v]){
            //     visited[v]=false;
            //     q.push(v);
            //     cout<<v<<" ";
            //}
    }
    
    
}
//void slove(){   
    // for(int i=0;i<1005;i++){
    //     G[i].clear();
    // }
    // memset(visited,false,sizeof(visited));
    // int V,E,nguon;
    // cin>>V>>E>>nguon;    
    // //init();
    // for(int i=0;i<V;i++){
    //     G[i].clear();
    // }
    // for(int i=0;i<E;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     G[u].push_back(v);
    //     G[v].push_back(u);
    // }
    // DFS(nguon);
    // cout<<endl;
//}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<1001;i++){
            G[i].clear();
        }    
        memset(visited,false,sizeof(visited));
        int V,E,nguon;
        cin>>V>>E>>nguon;    
        //init();
        // for(int i=0;i<V;i++){
        //     G[i].clear();
        // }
        for(int i=0;i<E;i++){
            int u,v;
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
    DFS(nguon);
    cout<<endl;    
        // slove();
    }
    return 0;
    

}