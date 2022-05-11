#include <bits/stdc++.h>
using namespace std;
int Binary_Search(vector<int> a, int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == k) 
			return m + 1;
		else if (k > a[m]) 
			l = m + 1;
		else 
			r = m - 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (auto &x: a) cin >> x;
		if(Binary_Search(a, n, k) != -1) 
			cout << Binary_Search(a, n, k) << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
