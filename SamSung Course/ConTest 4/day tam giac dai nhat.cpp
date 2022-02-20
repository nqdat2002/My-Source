#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[100005];
		vector<pair<int, int>> f;
		for (int i = 0; i < n; i++) cin >> a[i];
		int cnt = 1;
		a[n] = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] > a[i - 1]) {
				cnt++;
			}
			else {
				f.push_back({ i, cnt });
				cnt = 1;
			}
		}
		int res = 0;
		for (int i = 0; i < f.size(); i++) {
			cnt = 0;
			for (int j = f[i].first; j < n && j > 0; j++) {
				if (a[j] < a[j - 1]) {
					cnt ++;
				}
				else break;
			}
			res = max(res, f[i].second + cnt);
		}
		cout << res << endl;
	}
}