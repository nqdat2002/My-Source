#include <bits/stdc++.h>
using namespace std;
int Search(int a[], int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int t = (l + r) / 2;
		if (a[t] == k) 
			return 1;
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
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int cnt = 0;
		for (int i = a[0] + 1; i < a[n - 1]; i++)
			if (Search(a, n, i) == -1)
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
