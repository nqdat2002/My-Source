#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 26
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int t, k, n;
ll f[maxn][maxn];
void dp() {
    fw(1, maxn - 1, i) f[i][i] = f[i][1] = 1;
    fw(1, maxn - 1, i) fw(2, maxn - 1, j) {
        if (i >= j)
            f[i][j] = f[i - 1][j] * j + f[i - 1][j - 1];
    }
}
int main() {
    effective cin >> t;
    memset(f, 0, sizeof(f));
    dp();
    fw(1, t, i) {
        cin >> n >> k;
        cout << f[n][k] << '\n';
    }
}
