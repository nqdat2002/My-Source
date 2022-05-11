#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[1005];
vector<int> edge[1005];
int n, m;
bool bfs(int u){
    int cnt = 0;
    memset(check, false, sizeof(check));
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        ++cnt;
        check[v] = true;
        for(auto x: edge[v]){
            if(!check[x]){
                q.push(x);
                check[x] = true;
            }
        }
    }
    return cnt == n;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < 1005; ++i) edge[i].clear();
		for(int i = 0; i < m; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
		}
		int cnt = 0;
        for(int u = 1; u <= n; u ++){
            if(!bfs(u)){
                cnt = 1;
                break;
            }
        }
        if(cnt == 1) cout << "NO";
        else cout << "YES";
        cout << endl;
	}
}
