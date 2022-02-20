#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int t, a, b, c, s;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        s = __gcd(a, b);
        if (c % s == 0 && c <= max(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
