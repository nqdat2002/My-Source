#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;
const int nmax = 1001;
bool so_nto(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int f[nmax];
int main() {
    int t, n, p, q, m, u, v;
    cin >> n >> t >> p >> q >> m;
    f[0] = 0;
    for (int i = 1; i <= n; i++) 
		f[i] = f[i - 1] + so_nto(i * p % m + q);
    while (t--) {
        cin >> u >> v;
        cout << f[v] - f[u - 1] << '\n';
    }
    return 0;
}
