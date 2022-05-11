#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[1005];
vector<int> edge[1005];
int n, m, start;

void dfs(int u){
	check[u] = true;
	cout << u << " ";
	for(auto v: edge[u]){
		if(!check[v]){
			check[v] = true;
			dfs(v);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> start;
		memset(check, false, sizeof(check));
		for(int i = 0; i < 1005; ++i) edge[i].clear();
		for(int i = 0; i < m; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
		dfs(start);
		cout << endl;
	}
}
