#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Power(ll n, ll k){
	if(k == 0) return 1;
	ll x = Power(n, k / 2);
	if(k % 2 == 0) return x * x;
	return n * x * x;
}
int main () {
	int n; cin >> n;
	ll res = 0;
	for(int i = 1; i <= n; ++i){
		res += Power(2, i);
	}
	cout << res << endl;
	return 0;
}
