#include <bits/stdc++.h>
using namespace std;
#define nmax 351
typedef unsigned long long ull;
int n;
ull res = 1;
ull f[72][nmax];
vector<int> p;

void init() {
    bool f[nmax];
    memset(f, 1, sizeof f);
    p.push_back(1);
    for (int i = 2; i < nmax; i++)
        if (f[i]) {
            p.push_back(i);
            for (int j = i + i; j < nmax; j += i) f[j] = 0;
        }
}
void dp() {
    for (int i = 0; i <= n; i++) f[0][i] = 1;
    for (int j = 1; j < p.size(); j++) {
        if (p[j] > n)
            break;
        for (int i = 1; i <= n; i++) {
            f[j][i] = f[j - 1][i];
            if (i < p[j])
                continue;
            for (int x = p[j]; x <= i; x *= p[j]) f[j][i] = max(f[j][i], f[j - 1][i - x] * x);
        }
        res = max(res, f[j][n]);
    }
}
int main() {
    init();
    cin >> n;
    dp();
    cout << res;
}
