#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 0, 1};
const int dy[] = {0, -1, 1, 0};
int a[505][505], n, m, res;
void bfs(){
    cin >> n >> m;
    queue<pair<pair<int, int>, int> > q;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j ++){
            cin >> a[i][j];
            if(a[i][j] == 2) q.push({{i, j}, 0});
        }
    }
    while(!q.empty()){
        pair<int, int> idx = q.front().first;
        int cnt = q.front().second;
        q.pop();
        res = max(res, cnt);
        for(int i = 0; i < 4; ++i){
            int x = idx.first + dx[i], y = idx.second + dy[i];
            if(x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1){
                q.push({{x, y}, cnt + 1});
                a[x][y] = 2;
            }
        }
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j ++){
            if(a[i][j] == 1){
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        bfs();
    }
    return 0;
}