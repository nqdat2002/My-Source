#include <bits/stdc++.h>
using namespace std;
void Solve(int L, int R) {
    int res = 0, i, d;
    for (i = L; i <= R; i ++) {
        d = i;
        bool check[10] = {false};
        while (d) {
            if (check[d % 10] == true)
                break;
            if (d % 10 > 5)
                break;
            check[d % 10] = true;
            d /= 10;
        }
        if (d == 0)
            res++;
    }
    cout << res << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int L, R; cin >> L >> R;
        Solve(L, R);
    }
    return 0;
}