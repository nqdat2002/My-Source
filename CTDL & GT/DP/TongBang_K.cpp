#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int n, k, arr[1005];
long long f[100000005];

long long res() {
    f[0] = 1;
    for (int i = 1; i <= k; i++) {
        f[i] = 0;
        for (int j = 1; j <= n; j++) {
            if (arr[j] <= i) {
                f[i] += f[i - arr[j]];
                f[i] %= M;
            }
        }
    }
    return f[k];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        
        cout << res() << endl;
    }
    return 0;
}
