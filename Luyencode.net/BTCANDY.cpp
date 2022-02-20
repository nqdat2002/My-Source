#include <bits/stdc++.h>
using namespace std;
int n, m, cnt = 0;
void btr(int i, int prev, int remain) {
    if (i > n) {
        if (remain == 0) {
            cnt++;
        }
        return;
    }
    for (int keo = min(prev, remain - (n - i)); keo >= 1; keo--) btr(i + 1, keo, remain - keo);
}
int main() {
    cin >> n >> m;
    btr(1, m, m);
    cout << cnt << "\n";
    int q = m / n;
    int r = m % n;
    for (int i = 1; i <= n; i++)
        if (r >= i)
            cout << q + 1 << ' ';
        else
            cout << q << ' ';
}
