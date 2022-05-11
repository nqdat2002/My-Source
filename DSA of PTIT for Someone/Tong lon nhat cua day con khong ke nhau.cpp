#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1000005], a[1000005];
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        f[0] = 0;
	    f[1] = a[1];
	    f[2] = max(a[1], a[2]);
	    for (int i = 3; i <= n; i++) {
	        f[i] = a[i];
	        f[i] += max(f[i - 2], f[i - 3]);
	    }
	    cout << max(f[n - 1], f[n]) << endl;
    }
    return 0;
}
