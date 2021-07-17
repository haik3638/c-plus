#include<iostream>
#include<vector>
using namespace std;

int n; vector<int> ke[100001];
int *ans;
void dfsnot(int root, int level){
    
    if(ke[root].size()==0) *ans = max(level, *ans); 
    for(int i = 0; i < ke[root].size(); i++){
        dfsnot(ke[root][i], level+1);
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        
        for(int i = 1; i < n; i++){
            int cha, con; cin >> cha >> con;
            ke[cha].push_back(con);
        }
        int a = 0;
        ans =&a;
        for(int i = 1; i <= n; i++) dfsnot(i, 0);
        cout << *ans << endl;
        for(int i = 1; i <= n; i++) ke[i].clear();
    }
}