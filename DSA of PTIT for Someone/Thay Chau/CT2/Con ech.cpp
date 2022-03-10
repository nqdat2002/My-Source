#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll f[100005];
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		f[0] = 1;
		for(int i = 1; i <= n; i ++){
			f[i] = 0;
			for(int j = 1; j <= 3; j ++){
				f[i] += f[i - j] % mod;
				f[i] %= mod;
			}
		}
		cout << f[n] << endl;
	}
}
