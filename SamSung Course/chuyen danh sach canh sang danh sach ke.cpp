#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		vector<int> adj[1005];
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			int x, y; cin >> x >> y;
			adj[x].emplace_back(y);
			adj[y].emplace_back(x);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(int x : adj[i]){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
