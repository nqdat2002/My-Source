#include <bits/stdc++.h>
using namespace std;
int main() {
    int n1 = 1, n2 = 2, n;
    cin >> n;
    if (n <= 1)
        cout << 1;
    for (int i = 3; i <= n; i++) {
        int t = (n1 + n2) % 10;
        n1 = n2;
        n2 = t;
    }
    cout << n2;
    return 0;
}
