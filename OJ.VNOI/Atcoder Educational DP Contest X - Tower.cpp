#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[1005];
vector<vector<ll> > adj(1005);
ll dfs(int u){
	if(dp[u]) return dp[u];
	for(auto v: adj[u]){
		dp[v] = dfs(v);
		dp[u] = max(dp[u], dp[v] + 1);
	}
	return dp[u];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n, m; cin >> n >> m;
	for(int i = 1; i <= m; ++i){
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
	}
	for(int u = 1; u <= n; ++u) dfs(u);
	ll res = 0;
	for(int i = 1; i <= n; ++i) res = max(res, dp[i]);
	cout << res << endl;
	return 0;
}
