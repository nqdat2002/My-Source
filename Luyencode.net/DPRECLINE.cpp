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
int n, f[maxn][2], a[maxn], b[maxn];
void dp() {
    f[1][0] = a[1];
    f[1][1] = b[1];
    for (int i = 2; i <= n; i++) {
        f[i][0] = a[i] + max(f[i - 1][0] + abs(b[i] - b[i - 1]), f[i - 1][1] + abs(b[i] - a[i - 1]));
        f[i][1] = b[i] + max(f[i - 1][1] + abs(a[i] - a[i - 1]), f[i - 1][0] + abs(a[i] - b[i - 1]));
    }
}
int main() {
    effective cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    dp();
    cout << max(f[n][0], f[n][1]);
}
