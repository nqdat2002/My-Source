#include <bits/stdc++.h>
using namespace std;

int n, arr[1000005];
long long f[1000005];

long long result() {
    f[0] = INT_MIN;
    f[1] = arr[1];
    f[2] = arr[2];

    for (int i = 3; i <= n; i++) {
        f[i] = arr[i];
        f[i] += max(f[i - 2], f[i - 3]);
    }

    return max(f[n], f[n - 1]);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        
        cout << result() << endl;
    }
    return 0;
}
