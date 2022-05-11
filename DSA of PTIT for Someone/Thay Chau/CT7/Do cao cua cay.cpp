#include <bits/stdc++.h>
using namespace std;
vector<int> edge[100005];
bool vs[100005];
int res;
void dfs(int u, int cnt){
	res = max(res, cnt);
	vs[u] = true;
	for(auto v: edge[u]){
		if(!vs[v]) dfs(v, cnt + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 0; i < 100005; ++i) edge[i].clear();
		memset(vs, false, sizeof(vs));
		for(int i = 1; i < n; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
		res = 0;
		dfs(1, 0);
		cout << res << endl;
	}
	return 0;
}