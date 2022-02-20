#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
int n;
void Solve(){
	cin >> n;
	int m = 0;
	int a[n], b[n + 1] = {0};
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
		b[a[i]] = b[a[i] - 1] + 1;
		m = max(m, b[a[i]]);
	}
	cout << m << endl;
}
int main(){
	Solve();
	return 0;
}

