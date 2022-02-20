#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long m, n, a, b, res1 = 0, x = 0, res2 = 0;
        cin >> n >> m >> a >> b;
        res2 = a * n;
        if (n % m == 0)
            res1 = n / m * b;
		else {
            x = n % m;
            if (x * a < x * b)
                res1 = n / m * b + x * a;
            else
                res1 = n / m * b + x * b;
        }
        cout << min(res1, res2) << endl;
    }
    return 0;
}
