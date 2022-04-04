#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[100005];
vector<vector<int> > adj[100005];
int DFS(int u){
	if(dp(u)) return dp[u];
	for(auto v: adj[u]){
		dp[v] = DFS(v);
		dp[u] = max(dp[u], dp[v] + 1);
	}
	return dp[u];
}
int main(){
	int n, m;
	for(int i = 1; i <= m; ++i){
		int u, v; cin >> u >> v;
		a[u].push_back(v);
	}
	for(int u = 1; u <= n; ++u) DFS(u);
	int res = 0;
	for(int i = 1; i <= n; ++i) res = max(res, dp[i]);
	cout << res << endl;
	return 0;
}
