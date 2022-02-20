#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 65
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
int n, m, t;
ull f[maxn][maxn];
void dp() {
    fw(1, maxn - 1, i) f[1][i] = 1, f[i][1] = 0;
    fw(2, maxn - 1, i) f[i][3] = 2 * f[i - 1][3] + 1;
    fw(2, maxn - 1, i) fw(4, maxn - 1, j) {
        f[i][j] = INT_MAX;
        fw(1, i - 1, k) f[i][j] = min(f[i][j], 2 * f[k][j] + f[i - k][j - 1]);
    }
}
int main() {
    effective cin >> t;
    dp();
    fw(1, t, i) cin >> n >> m, cout << f[n][m] << '\n';
}
