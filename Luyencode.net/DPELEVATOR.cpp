#include <bits/stdc++.h>
#define fw(a, b, c) for (ll c = a; c <= b; c++)
#define bw(a, b, c) for (ll c = a; c >= b; c--)
#define maxn 401
#define effective            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
typedef long long ll;
int a[maxn], h[maxn], c[maxn], k;
ll res = 0;
bool Aki[40001];
struct blocks {
    ll h, a, c;
} p[maxn];
bool srt(blocks t, blocks r) { return t.a < r.a; }
void dp() {
    Aki[0] = 1;
    fw(1, k, i) fw(1, p[i].c, j) bw(min(p[i].a, res + p[i].h), p[i].h, x) if (Aki[x - p[i].h] == 1) {
        Aki[x] = 1;
        res = max(res, x);
    }
}
int main() {
    effective cin >> k;
    memset(Aki, 0, sizeof(Aki));
    fw(1, k, i) cin >> p[i].h >> p[i].a >> p[i].c;
    sort(p + 1, p + 1 + k, srt);
    dp();
    cout << res;
}
