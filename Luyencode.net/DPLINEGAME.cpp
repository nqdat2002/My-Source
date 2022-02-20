#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 1000001
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
ll k[maxn], s[maxn], a[maxn], n;
void dp() {
    s[1] = a[1];
    k[1] = 0;
    fw(2, n, i) {
        k[i] = max(k[i - 1], s[i - 1] - a[i]);
        s[i] = max(s[i - 1], k[i - 1] + a[i]);
    }
}
int main() {
    effective cin >> n;
    fw(1, n, i) cin >> a[i];
    dp();
    cout << max(s[n], k[n]);
}
