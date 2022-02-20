#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;
const int oo = 1000000007;

int nTest, n, a[MAXN];

int task1() {
    int res = 0;
    bool allNegative = true;

    for(int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            allNegative = false;
            res += a[i];
        }
    }

    if (allNegative)
        res = *max_element(a, a+n);
    return res;
}

int task2() {
    int sum = 0, res = -oo;
    for(int i = 0; i < n; ++i) {
        sum = sum + a[i];
        res = max(res, sum);
        sum = max(sum, 0);
    }

    return res;
}

int main() {
    // freopen("SUB.INP", "r", stdin);
    // freopen("SUB.OUT", "w", stdout);

    scanf("%d", &nTest);
    while (nTest--) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);

        printf("%d %d\n", task1(), task2());
    }

}
