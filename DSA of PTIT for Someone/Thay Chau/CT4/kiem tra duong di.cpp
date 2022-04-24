#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[1005];
vector<int> edge[1005];
int n, m;
void dfs(int u){
	check[u] = true;
//	cout << u << " ";
	for(auto v: edge[u]){
		if(!check[v]){
			dfs(v);
		}
	}
}
void DuongDi(int st, int en){
	memset(check, false, sizeof(check));
	dfs(st);
	if(!check[en]){
		cout << "NO";
		return;
	}
	cout << "YES";
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		memset(check, false, sizeof(check));
		for(int i = 0; i < 1005; ++i) edge[i].clear();
		for(int i = 0; i < m; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
		int query; cin >> query;
		while(query--){
			int st, en; cin >> st >> en;
			DuongDi(st, en);
			cout << endl;
		}
	}
}
