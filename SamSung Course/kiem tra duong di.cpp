#include <bits/stdc++.h>
using namespace std;
vector <int> a[1005];
bool chuaxet[1005];
int truoc[1005];
void bfs(int u, int v){
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t = q.front();
		q.pop();
		chuaxet[t] = true;
		if(t == v){
			cout << "YES";
			return;
		}
		for(int i = 0; i < a[t].size(); i ++){
			if(!chuaxet[a[t][i]]){
				int x = a[t][i];
				chuaxet[x] = true;
				truoc[x] = t;
				q.push(x);
			}
		}
	}
	cout << "NO";
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i ++)
			a[i].clear();
		int n, b; cin >> n >> b;
		for(int i = 0; i < b; i ++){
			int u, v;
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		int p; cin >> p;
		while(p--){
			memset(chuaxet, false, sizeof(chuaxet));
			int x, y; cin >> x >> y;
			bfs(x, y);
			cout << endl;
		}
	}
	return 0;
}