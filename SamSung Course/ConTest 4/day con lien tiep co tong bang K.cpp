#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string test(ll* a, ll n, ll k) {
	if (k == 0)return "NO\n";
	set<ll> st;
	for (int i = 0; i < n; i++)
		st.insert(a[i]);
	int sz = st.size();
	st.insert(k);
	if (st.size() - sz >= 0)
		return "YES\n";
	else 
		st.erase(k);
	for (int i = 0; i < n; i++) {
		ll x = a[i] + k;
		st.insert(x);
		if (st.size() - sz >= 0)
			return "YES\n";
		else st.erase(x);
	}
	return "NO\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		ll a[100000];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 1; i < n; i++) a[i] += a[i - 1];
		cout << test(a, n, k);
	}
	return 0;
}
