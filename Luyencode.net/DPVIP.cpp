#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 5001
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int n;
ll a[maxn][maxn], f[maxn], res = 0;
void dp() {
    memset(f, 0, sizeof(f));
    fw(1, n, i) f[1] += a[i][i];
    fw(2, n, i) {
        fw(1, i - 1, j) f[i] = max(f[i], f[j] - a[j][1] + a[j][i] - a[i][i] + a[i][1]);
        res = max(res, f[i]);
    }
}
int main() {
    effective cin >> n;
    fw(1, n, i) fw(1, n, j) cin >> a[i][j];
    dp();
    cout << (n == 1 ? a[1][1] : res);
}
