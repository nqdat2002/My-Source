#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + 5], b[m + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < m; i ++) cin >> b[i];
		sort(b, b + m);
		cout << (long long) a[n - 1] * b[0] << endl;
	}
	return 0;
}
