#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int s(long long n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    long long n, m, kq = -1, x;
    cin >> n;
    m = sqrt(n);
    x = m;
    bool kt = 0;
    while (x * x + s(x) * x >= n - 100 * m) {
        if (x * x + s(x) * x == n)
            kq = x;
        if (x < 0)
            break;
        --x;
    }
    cout << kq;
}
