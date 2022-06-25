#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr), cout.tie(nullptr)->ios::sync_with_stdio(false);
	freopen("4.inp", "r", stdin);
	freopen("4.out", "w", stdout);
	// int m, n;
	// cin >> m >> n;
	// vector<int> a(m), b(n);
	// for (int i = 0; i < m; i++) {
	// 	cin >> a[i];
	// }
	// for(int i = 0; i < n; i++) {
	// 	cin >> b[i];
	// 	auto it = find(a.begin(), a.end(), b[i]);
	// 	if(it != a.end())
	// 		cout << it - a.begin() + 1 << ' ';
	// 	else
	// 		cout << "0 ";
	// }

	map<int, int> mp;
	int m, n, tmp;
	cin >> m >> n;
	for(int i = 0; i < m; i++) {
		cin >> tmp;
		if(mp.find(tmp) == mp.end())
			mp[tmp] = i;
	}
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		if(mp.find(tmp) != mp.end())
			cout << mp[tmp] + 1 << ' ';
		else
			cout << "0 ";
	}

	return 0;
}


