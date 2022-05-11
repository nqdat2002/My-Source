#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1005];
vector<int> edge[1005];
int n, m;
bool ok;
void dfs(int u, string s, int par) {
	if(ok) return;
	check[u] = true;
	for (auto v : edge[u]) {
		if (!check[v])
			dfs(v, s + " " + to_string(v), u);
		else if (v != par && v == 1) {
			ok = true; 
			cout << s << " " << 1 << endl;
			return;
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < 1005; ++i) edge[i].clear();
		for(int i = 0; i < m; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
		memset(check, false, sizeof(check));
		for(int i = 0; i <= n; ++i) sort(edge[i].begin(), edge[i].end());
		ok = false;
		dfs(1, "1", 0);
		if (!ok) cout << "NO" << endl;
	}
}