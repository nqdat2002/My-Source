#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for(auto &x: a) cin >> x;
		a.pb(0);
		int cnt = 1;
		vector<pair<int, int> > b;
		b.clear();
		for (int i = 1; i <= n; i++) {
			if (a[i] > a[i - 1]) 
				cnt++;
			else {
				b.pb({ i, cnt });
				cnt = 1;
			}
		}
		int res = 0;
		for (int i = 0; i < b.size(); i++) {
			int c = 0;
			for (int j = b[i].f; j < n && j > 0; j++) {
				if (a[j] < a[j - 1]) c ++;
				else 
					break;
			}
			res = max(res, b[i].s + c);
		}
		cout << res << endl;
	}
	return 0;
}
