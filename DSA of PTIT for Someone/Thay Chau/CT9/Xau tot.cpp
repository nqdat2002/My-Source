#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	vector<int> v;
	string s;
	cin >> n >> s;
	ll ans = (n * (n - 1)) / 2, cnt = 1;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1])	
			cnt++;
		else {
			v.push_back(cnt);
			cnt = 1;
		}
	}
	if (cnt > 0) v.push_back(cnt);
	for (int i = 0; i < v.size() - 1; i++) {
		ans -= (v[i] + v[i + 1] - 1);
	}
	cout << ans << endl;
	return 0;
}
