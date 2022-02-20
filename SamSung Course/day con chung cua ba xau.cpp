#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[105][105][105];
string a, b, c;
ll dp(string a, string b, string c){
	memset(f, 0 , sizeof(f));
	int n = a.size(), m = b.size(), p = c.size();
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= m; j ++){
			for(int k = 1; k <= p; k ++){
				if(a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1]) 
					f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
				else
					f[i][j][k] = max(f[i- 1][j][k], max(f[i][j - 1][k], f[i][j][k - 1]));
			}
		}
	}
	return f[n][m][p];
}
int main(){
	int t; cin >> t;
	while(t--){
		int x, y, z; cin >> x >> y >> z;
		cin >> a >> b >> c;
		cout << dp(a, b, c) << endl;
	}
	return 0;
}