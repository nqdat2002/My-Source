#include <bits/stdc++.h>
using namespace std;
#define nmax 505
typedef long long ll;
#define oo 1000000000000001ll
ll f[nmax][nmax], d[nmax], n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i <= n; i++) cin >> d[i];
    for (int i = 1; i <= n; i++) f[i][i] = 0;
    for (int i = 1; i < n; i++) f[i][i + 1] = d[i - 1] * d[i] * d[i + 1];
    for (int m = 2; m < n; m++)
        for (int i = 1; i <= n - m; i++) {
            int j = i + m;
            f[i][j] = oo;
            for (int k = i; k <= j - 1; k++)
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + d[i - 1] * d[k] * d[j]);
        }
    cout << f[1][n];
}
