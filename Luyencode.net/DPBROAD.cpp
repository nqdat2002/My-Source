#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 501
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int n, a[maxn][maxn], q, r1, r2, c1, c2;
ll f[maxn][maxn];
int main() {
    effective cin >> n;
    fw(1, n, r) fw(1, n, c) {
        cin >> a[r][c];
        a[r][c] *= ((r + c) % 2 == 0 ? 1 : -1);
        f[r][c] = f[r - 1][c] + f[r][c - 1] - f[r - 1][c - 1] + a[r][c];
    }
    cin >> q;
    fw(1, q, i) {
        cin >> r1 >> c1 >> r2 >> c2;
        cout << abs(f[r2][c2] - f[r1 - 1][c2] - f[r2][c1 - 1] + f[r1 - 1][c1 - 1]) << '\n';
    }
}
