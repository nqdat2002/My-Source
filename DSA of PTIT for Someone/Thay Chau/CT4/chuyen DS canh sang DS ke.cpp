#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[1005];
vector<int> edge[1005];
int n, m;
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
		for(int u = 1; u <= n; ++u){
			cout << u << ": ";
			for(auto v: edge[u])
				cout << v << " ";
			cout << endl;
		}
	}
	return 0;
}
