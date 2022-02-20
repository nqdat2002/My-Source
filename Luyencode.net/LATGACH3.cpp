#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 32
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int t, n;
ll f[maxn];
void dp() {
    memset(f, 0, sizeof(f));
    f[0] = 1;
    f[2] = 3;
    for (int i = 4; i <= 31; i += 2) {
        f[i] = 3 * f[i - 2] + 2;
        for (int j = i - 4; j > 0; j -= 2) 
			f[i] += 2 * f[j];
    }
}
int main() {
    effective cin >> t;
    dp();
    fw(1, t, i) cin >> n, cout << f[n] << '\n';
    return 0;
}
