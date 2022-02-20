#include <bits/stdc++.h>
using namespace std;
int a[1001][1001], c[1001][1001], n, m;
void Move(){
	queue <pair<int, int> > q;
	memset(c, -1, sizeof(c));
	q.push(make_pair(1, 1));
	c[1][1] = 0;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		int i = p.first, j = p.second;
		if(c[i + a[i][j]][j] == -1){
			q.push(make_pair(i + a[i][j], j));
			c[i + a[i][j]][j] = c[i][j] + 1;
		}
		if(c[i][j + a[i][j]] == -1){
			q.push(make_pair(i, a[i][j] + j));
			c[i][j + a[i][j]] = c[i][j] + 1;
		}
		if(c[n][m] != -1) break;
	}
	cout << c[n][m] << endl;
}
int main() {
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= n; i ++)
			for(int j = 1; j <= m; j ++) cin >> a[i][j];
		Move();
	}
	return 0;
}