#include <stdio.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
#define X first
#define Y second

#define N 10004
int n, m;//n dinh m canh
vector<ii> a[N];//danh sach canh co trong so
int d[N];//khoang canh tu nut u den cay khung dang dung

void entermatrix(){//nhap matrix
    int n;
    cin>>n;
    int matrix[n+5][n+5];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(matrix[i][j]!=-1){//neu matrix hang i cot j khac vo cung 'oo' thi them vao danh sach canh
                a[i].push_back(ii(j,matrix[i][j]));
                a[j].push_back(ii(i,matrix[i][j]));
            }
        }
    }
}
void enterlist() {//nhap danh sach canh
    for (int i = 1; i <= m; ++i) {
        int p, q, w;
        cin >> p >> q >> w;
        a[p].push_back(ii(w, q));
        a[q].push_back(ii(w, p));
    }
}

bool minimize(int &a, int b) {//tim min cua a,b 
    if (a > b)
        a = b;
    else
        return false;
    return true;
}

int prim(int start) {
    int Answer = 0;
    priority_queue<ii> qu;//su dung hang doi
    for (int i = 1; i <= n; ++i) d[i] = 0x33334444;
    qu.push(ii(0, start)), d[start] = 0;

    while (qu.size()) {
        ii top = qu.top();
        qu.pop();
        int u = top.Y;
        if (d[u] != -top.X) continue;//d[u]khac trong so thi bo qua dong sau no(0=-0)?"-"
        Answer += d[u]; d[u] = 0;
        cout<<Answer<<" ";

        for (int i = 0; i < a[u].size(); i++) {
            int v = a[u][i].Y;
            if (minimize(d[v], a[u][i].X))
                qu.push(ii(-d[v], v));
        }
    }
    return Answer;
}

int main() {
    ios ::sync_with_stdio(false);
    cin >> n >> m;
    enterlist();
    cout << prim(1) << endl;
    cin.ignore(2);
}
