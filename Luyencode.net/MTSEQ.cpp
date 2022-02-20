#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;

struct matrix {
    ll p[5][5];
} basic;
ll m;
matrix nhan(matrix a, matrix b) {
    matrix c;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            c.p[i][j] = 0;
            for (int k = 1; k <= 3; k++)
                c.p[i][j] = (c.p[i][j] + a.p[i][k] * b.p[k][j] + 1LL * mod * mod) % mod;
        }
    }
    return c;
}
matrix mu(ll n) {
    if (n == 1)
        return basic;
    matrix tmp = mu(n / 2);
    tmp = nhan(tmp, tmp);
    if (n & 1)
        tmp = nhan(basic, tmp);
    return tmp;
}
int main(){
    int n;
    basic.p[1][1] = basic.p[1][3] = basic.p[2][1] = basic.p[2][2] = 0;
    basic.p[1][2] = basic.p[2][3] = basic.p[3][1] = 1;
    basic.p[3][2] = -2;
    basic.p[3][3] = 3;

    cin >> n;
    while (n--) {
        cin >> m;
        if (m < 4) {
            cout << m << ' ';
            continue;
        }
        matrix ans = mu(m - 3);
        cout << (ans.p[3][3] * 3 + 2 * ans.p[3][2] + ans.p[3][1] + mod * 50ll) % mod << ' ';
    }
    return 0;
}
