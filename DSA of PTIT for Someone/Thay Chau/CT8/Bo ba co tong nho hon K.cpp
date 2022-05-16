#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; ll k; cin >> n >> k;
		vector<ll> a(n);
		for(auto &x: a) cin >> x;
		ll cnt = 0;
		sort(a.begin(), a.end());
		for(int i = 0; i < n - 1; i ++){
			for(int j = i + 1; j < n; j ++){
				auto x = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]) - a.begin();
				int t = x - 1 - j;
				if(t >= 1) cnt += t;
			}
		}
		cout << cnt << endl;

	}
	return 0;
}
