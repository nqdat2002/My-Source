#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

int a[505][505];
int n, m;
void dfs(int x, int y){
    a[x][y] = 0;
    for(int i = 0; i < 8; i ++){
        int x1 = x + dx[i], y1 = y + dy[i];
        if(a[x1][y1] && x1 > 0 && x1 <= n && y1 > 0 && y1 <= m){
            dfs(x1, y1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j) cin >> a[i][j];
        int cnt = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                if(a[i][j]){
                    ++cnt;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}
