#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b || n < 1) cout << 0 << endl;
	else if (n == 1) cout << (a == b ? 1 : 0) << endl;
	else cout << 1ll * (b - a) * (n - 2) + 1 << endl;
	return 0;
}
