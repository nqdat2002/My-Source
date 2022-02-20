#include <bits/stdc++.h>
using namespace std;
int Sumx(int x) {
    int sum = 0;
    while(x) {
    	sum += x%10;
        x /= 10;
    }
    return sum;
}
int main() {
    int test, n, x, a[3];
    cin >> test;
    while (test--) {
        a[0] = a[1] = a[2] = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            a[Sumx(x) % 3]++;
        }
        cout << a[0] / 2 + min(a[1], a[2]) << '\n';
    }
    return 0;
}
