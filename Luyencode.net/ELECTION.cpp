#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
int t, n, k, a[MAXN];
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &k);
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        int maxx = 0;
        for(int i = 0; i < n; ++i)
            maxx = max(maxx, a[i]);

        int sumx = 0;
        for(int i = 0; i < n; ++i)
            sumx += maxx - a[i];

        if (k >= sumx && (k - sumx)%n == 0)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
