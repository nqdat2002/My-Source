#include <bits/stdc++.h>
using namespace std;
char a[501][501];
int m, n;
pair<int, int> u, v;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char dh[4] = { 'B','T','D','N' };
bool visited[501][501];
bool ok;
void input() {
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'S') 
				u = {i, j};
			if (a[i][j] == 'T') 
				v = {i, j};
		}
	ok = false;
	memset(visited, false, sizeof(visited));
}
void dfs(int x, int y, int cnt, char DH) {
	visited[x][y] = true;
	if (x == v.first && y == v.second && cnt <= 3) {
		ok = true;
		return;
	}
	if (cnt > 3 || a[x][y] == 'T') {
		visited[x][y] = false;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if (x1 >= 0 && x1 < m && y1 >= 0 && y1 < m && a[x1][y1] != '*' && !visited[x1][y1]) {
			if (dh[i] != DH)
				dfs(x1, y1, cnt + 1, dh[i]);
			else 
				dfs(x1, y1, cnt, dh[i]);
		}
	}
	visited[x][y] = false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		input();
		dfs(u.first, u.second, 0, 'X');
		if(ok)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}