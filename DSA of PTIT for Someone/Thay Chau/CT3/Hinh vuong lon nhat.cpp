#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin>> n >> m;
        int a[n][m];
        ll f[n][m];
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < m; j ++) cin >> a[i][j];
        for(int i = 0; i < n; i ++){
        	(a[i][0] == 1) ? f[i][0] = 1 : f[i][0] = 0;
        	for(int j = 1; j < m; j ++){
        		if(a[i][j])
        			f[i][j] = f[i][j - 1] + 1;
        		else 
        			f[i][j] = 0;
        	}
		}
		ll res = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j ++){
				if(f[i][j] > res){
					if(res > i + 1) continue;
					ll tp = f[i][j];
					for(int k = i; k > i - res - 1; k --)
						tp = min(tp, f[k][j]);
					res = max(tp, res);
				}
			}
		}
        cout << res << endl;
    }
    return 0;
}
