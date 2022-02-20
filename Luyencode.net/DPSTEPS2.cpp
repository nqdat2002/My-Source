#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 2001
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
typedef string str;
int n, k, b;
str s[maxn];
bool f[maxn];
str operator+(str a, str b) {
    int na = a.length(), nb = b.length();
    int n = max(na, nb);
    str c(n, '0');
    if (na < n)
        a.insert(0, str(n - na, '0'));
    if (nb < n)
        b.insert(0, str(n - nb, '0'));
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += a[i] - '0' + b[i] - '0';
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho)
        c = char(nho + '0') + c;
    return c;
}
void dp() {
    s[0] = "1";
    s[1] = (f[1] ? "0" : "1");
    fw(2, n, i) {
        if (!f[i])
            s[i] = s[i - 1] + s[i - 2];
        else
            s[i] = "0";
    }
}
int main() {
    effective memset(f, 0, sizeof(f));
    cin >> n >> k;
    fw(1, k, i) cin >> b, f[b] = 1;
    dp();
    cout << s[n];
}
