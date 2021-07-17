#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;//n dinh m canh
        vector<vector<int>> a(n, vector<int>(n, 1e9));//nhap danh sach ke

        for(int i=0;i<n;i++) a[i][i] = 0;
        while (m--) {
            int u, v, c;//canh u--->v co c trong so
            cin >> u >> v >> c;
            a[u - 1][v - 1] = c;
        }
        for(int k=0;k<n;k++)
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++) {
                    if (a[i][j] > a[i][k] + a[k][j]) {
                        a[i][j] = a[i][k] + a[k][j];
                    }
                }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) 
                if (a[i][j] == 1e9) {
                    a[i][j] = 0;
                }
        }
        for(int i=0;i<n;i++) {
            int res = -1;
            for(int j=0;j<n;j++) 
                if (a[i][j] && a[j][i]) {
                    if (res < 0) res = a[i][j] + a[j][i];
                    else res = min(a[i][j] + a[j][i], res);
            }
            cout << res << '\n';
        }
    }
    return 0;
}