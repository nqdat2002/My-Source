#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
int n, m, T, a[MAXN], b[MAXN];
long long productCount(int a[], int n, int t) {
    long long res = 0;
    for(int i = 0; i < n; ++i)
        res += t / a[i];
    return res;
}
long long f(int t) {
    return min(productCount(a, n, t), productCount(b, m, T-t));
}
int main() {
    scanf("%d", &T);
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for(int i = 0; i < m; ++i)
        scanf("%d", &b[i]);
    int lo = 0, hi = T, optimalT = -1;
    while (lo <= hi) {
        int mid = (lo + hi)/2;
        long long cntA = productCount(a, n, mid);
        long long cntB = productCount(b, m, T - mid);

        if (cntA < cntB) {
            optimalT = mid;
            lo = mid + 1;
        } else
            hi = mid - 1;
    }
    long long ans = f(optimalT);
    if (optimalT <= T)
        ans = max(ans, f(optimalT + 1));

    printf("%lld", ans);
    return 0;
}
