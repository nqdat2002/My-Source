#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin>> n >> m;
        int a[n + 1][m + 1];
        ll f[n + 1][m + 1];
        memset(f, 0, sizeof(f));
        for(int i = 1; i <= n; i ++)
            for(int j = 1; j <= m; j ++) cin >> a[i][j];
        ll res = 0;
        for(int i = 1; i <= m; ++i) f[0][i] = a[0][i];
        for(int i = 1; i <= n; ++i) f[i][0] = a[i][0];
        for(int i = 1; i <= n; ++i){
        	for(int j = 1; j <= m; ++j) {
        		if(a[i][j]) f[i][j] = min(min(f[i - 1][j], f[i][j - 1]), f[i - 1][j - 1]) + 1;
        		else f[i][j] = 0;
        		res = max(res, f[i][j]);
			}
		}
        cout << res << endl;
    }
    return 0;
}
