#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1005][1005];
// xau con chung dai nhat
string a, b;
ll dp(string a, string b){
	int n = a.size(), m = b.size();
	for(int i = 0; i < n; i ++) f[i][0] = 0;
	for(int i = 0; i < m; i ++) f[0][i] = 0;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= m; j ++){
			if(a[i - 1] == b[j - 1]) f[i][j] = f[i - 1][j - 1] + 1;
			else
				f[i][j] = max(f[i- 1][j], f[i][j - 1]);
		}
	}
	return f[n][m];
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> a >> b;
		cout << dp(a, b) << endl;
	}
	return 0;
}