#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool xet[100];
void in(){ for(int i = 1; i <= n; ++i) cout << a[i]; cout << " "; }
void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if(!xet[j]){
			xet[j] = true;
			a[i] = j;
			if(i == n) in();
			else Try(i + 1);
			xet[j] = false;
		}
	}
}
int main() {
	freopen("test3.inp", "r", stdin);
	freopen("test3.out", "w", stdout);
	int t; cin >> t;
	while (t--) {
		cin >> n;
		memset(xet, false, sizeof(xet));
		Try(1);
		cout << endl;
	}
	return 0;
}

