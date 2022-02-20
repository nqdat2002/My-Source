#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
const ll mod = 1e9 + 7;
int n;
ull k, a[20][20], b[20][20];
void Multi(ull x[20][20], ull y[20][20]){
	ull tmp[20][20];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			ull res = 0;
			for(int k = 0; k < n; k ++){
				res += (x[i][k] * y[k][j]) % mod;
				res %= mod;
			}
			tmp[i][j] = res;
		}
	}
	for(int i = 0; i < n; i ++)
		for(int j = 0; j < n; j ++)
			a[i][j] = tmp[i][j];
}
void Pow(ull a[20][20], ll n){
	if(n <= 1) return;
	Pow(a, n / 2);
	Multi(a, a);
	if(n & 1) 
		Multi(a, b);
}
void Solve(){
	cin >> n >> k;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	Pow(a, k);
	ll sum = 0;
	for(int i = 0; i < n; i ++){
		sum += a[i][n - 1];
		sum %= mod;
	};
	cout << sum << endl;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}
