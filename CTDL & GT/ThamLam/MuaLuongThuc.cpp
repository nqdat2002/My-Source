#include <bits/stdc++.h>
using namespace std;

void res(int n, int s, int m) {
    if (((n * 6) < (m * 7) && s > 6) || m > n)
        cout << "-1\n";
    else {
        int ans = (m * s) / n;
        if (((m * s) % n) != 0)
            ans++;
        cout << ans << "\n";
    }
}

int main() {
    int test, n, s, m;
    cin >> test;
    while (test--) {
        cin >> n >> s >> m;
        res(n, s, m);
    }
    return 0;
}
