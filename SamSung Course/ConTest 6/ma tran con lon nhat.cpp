#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[402][402], r[402][402] = {0};
int main(){
	int n; cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++) 
			cin >> a[i][j];
	}
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			if(i == 1 || j == 1)
				f[i][j] = a[i][j];
			else
				f[i][j] = a[i][j] + f[i - 1][j - 1];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = n; j >= 1; j--){
			if(i == 1 || j == n)
				r[i][j] = a[i][j];
			else
				r[i][j] = r[i - 1][j + 1] + a[i][j];
		}
	}
	ll res = -1e18;
	for(int i = n; i >= 1; i --){
		for(int j = n; j >= 1; j --){
			int t = min(j, i);
			int row = i - t;
			int col = j - t;
			for(int k = 0; k < min(i, j); k ++){
				ll x = f[i][j] - f[row + k][col + k] - (r[i][col + k + 1] - r[row + k][j + 1]);
				res = max(res, x);
			}
		}
	}
	cout << res << endl;
	return 0;
}
