#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Solve(ll n, ll i, ll cnt){
	if(i % 2 == 1) 
		return 1;
	if(i == cnt)
		return (n % 2);
	if(i > cnt)
		return Solve(n / 2, i - cnt, cnt / 2);
	return Solve(n / 2, i, cnt / 2);
}
int main (){
	int t; cin >> t;
	while(t--){
		ll n, l, r, res = 0;
		cin >> n >> l >> r;
		ll cnt = pow(2, (ll)log2(n));
		for(ll i = l; i <= r; i ++)
			res += Solve(n, i, cnt);
		cout << res << endl;
	}
	return 0;
}