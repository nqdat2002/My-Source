#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, f[50];
ll Solve() {
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        f[i] = 0;
        for (int j = 1; j <= 3; j++) 
            if (j <= i) 
                f[i] += f[i - j];
    }
    return f[n];
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve() << endl;
    }
    return 0;
}
