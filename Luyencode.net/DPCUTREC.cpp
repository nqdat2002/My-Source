#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 1001
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int l, w, f[maxn][maxn];
void dp() {
    memset(f, 0, sizeof 0);
    fw(1, l, i) f[i][1] = i;
    fw(1, w, i) f[1][i] = i;
    fw(2, l, i) fw(2, w, j) {
        if (i == j) {
            f[i][j] = f[j][i] = 1;
            continue;
        }
        if (f[i][j])
            continue;
        f[i][j] = i * j;
        fw(1, j / 2, k) f[i][j] = min(f[i][j], f[i][k] + f[i][j - k]);
        fw(1, i / 2, k) f[i][j] = min(f[i][j], f[k][j] + f[i - k][j]);
        f[j][i] = f[i][j];
        for (int k = 1; k * i <= l && k * j <= w; k++) f[i * k][j * k] = f[j * k][i * k] = f[i][j];
    }
}
int main() {
    effective cin >> l >> w;
    int k = __gcd(l, w);
    l /= k;
    w /= k;
    dp();
    cout << f[l][w];
}
