#include <bits/stdc++.h>
using namespace std;
int Search(int a[], int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int t = (l + r) / 2;
		if (a[t] == k) 
			return t + 1;
		else if (k > a[t]) 
			l = t + 1;
		else 
			r = t - 1;
	}
	return -1;
}
int main() {
	int T; cin >> T;
	while (T--) {
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		if(Search(a, n, k) != - 1) cout << Search(a, n, k) << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

