#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n, m, p; cin >> n >> m >> p;
	ll a[n], b[m], c[p];
	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;
	for(auto &x: c) cin >> x;
	int i = 0, j = 0, k = 0;
	vector<ll> v;
	while(i < n && j < m && k < p){
		if(a[i] == b[j] && a[i] == c[k]){
			v.push_back(a[i]);
			++i;
			++j;
			++k;
		}else if (a[i] <= b[j] && a[i] <= c[k]) ++i;
		else if (b[j] <= a[i] && b[j] <= c[k]) ++j;
		else ++k;
	}
	if(v.size()) {
		for(auto x: v) cout << x << " ";
	}else cout << "NO";
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
