#include <bits/stdc++.h>
using namespace std;
int a[100] = {};
void xuli() {
    a[0] = 1;
    for (int i = 2; i <= 45; i++) a[i] = a[i - 1] + a[i - 2];
}
int ktra(int n, int k) {
    int t = 0, p = n % 2;
    while (k) {
        int i = 40 - p;
        while (a[i] > k) i -= 2;
        k -= a[i];
        t += a[i - 2];
        p = 1 - p;
    }
    return t;
}
int main() {
    xuli();
    long t, n, k;
    cin >> t;
    for (int i = t; i != 0; i--) {
        cin >> n >> k;
        cout << ktra(n, k) << endl;
    }
    return 0;
}
