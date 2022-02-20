#include <bits/stdc++.h>
#define f(a, b, c) for (ll c = a; c <= b; c++)
#define maxn 1001
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int n, a[maxn], f[maxn][maxn], v[maxn], res = 1e9 + 1;
void dp() {
    v[0] = 0;
    f(1, n, i) if (a[i] > 100) v[i] = v[i - 1] + 1;
    else v[i] = v[i - 1];
    f(1, n, i) f(0, v[i], j) {
        f[i][j] = 1e9 + 1;
        if (a[i] <= 100)
            f[i][j] = f[i - 1][j] + a[i];
        if (a[i] > 100 && j > 0)
            f[i][j] = f[i - 1][j - 1] + a[i];
        if (j < v[i - 1])
            f[i][j] = min(f[i][j], f[i - 1][j + 1]);
    }
    f(0, v[n], i) 
		res = min(res, f[n][i]);
}
int main() {
    cin >> n;
    f(1, n, i) 
		cin >> a[i];
    memset(f, 0, sizeof f);
    dp();
    cout << res;
}
