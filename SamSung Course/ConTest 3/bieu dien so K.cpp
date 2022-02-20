#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll p = 1e9 + 7;
int n, k, a[1005];
ll f[1000005];
void inp(){
	cin >> n >> k;
    for (int i = 1; i <= n; i++)
    	cin >> a[i];
}
void Solve() {
    f[0] = 1;
    for (int i = 1; i <= k; i++) {
        f[i] = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j] <= i) {
                f[i] += f[i - a[j]];
                f[i] %= p;
            }
        }
    }
    cout << f[k] << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        inp();
        Solve();
    }
    return 0;
}
