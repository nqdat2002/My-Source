#include <bits/stdc++.h>
using namespace std;
int n, visited[100];
long c[20][20], x[100], s = 0, res = 1e7, cmin = 1e7;
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			cin >> c[i][j];
			cmin = min(cmin, c[i][j]);
		}
	}
	memset(visited, 1, sizeof(visited));
	visited[1] = 0;
	x[1] = 1;
}
void Try(int i){
	if(s + cmin * (n - i + 1) >= res) 
		return;
	for(int j = 1; j <= n; j ++){
		if(visited[j]){
			x[i] = j;
			visited[j] = 0;
			s += c[x[i - 1]][j];
			if(i == n){
				if(s + c[x[n]][x[1]] < res)
					res = s + c[x[n]][x[1]];
			}
			else Try(i + 1);
			s -= c[x[i - 1]][j];
			visited[j] = 1;
		}

	}
}
int main(){
	inp();
	Try(2);
	cout << res;
	return 0;
}
