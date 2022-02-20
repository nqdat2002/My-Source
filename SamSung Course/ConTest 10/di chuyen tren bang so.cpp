#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int n, m, s, t;
int a[1005][1005];
bool chuaxet[505][505];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool dfs(int i, int j){
	cout << i << " " << j << endl;
	if(a[i][j] == a[n][m]) 
		return true;
	for(int k = 0; k < 4; k ++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= i && i1 <= n && j1 >= 1 && j1 <= m){
			if(dfs(i1, j1)) 
				return true;
		}
	}
	return false;
}
void inp(){
	cin >> n >> m;
	s = t = 1;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= m; j ++){
			cin >> a[i][j];
		}
	}
	memset(chuaxet, false, sizeof(chuaxet));
	if(dfs(s, t)) 
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
int main(){
	FileIO();
	inp();
}