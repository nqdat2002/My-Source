#include <bits/stdc++.h>
using namespace std;

long long min_sum(int n, long long a[]) {
    long long x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (i%2==1)
            x = x * 10 + a[i];
        else 
            y = y * 10 + a[i];
    }
    return x + y;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << min_sum(n, a) << endl;
    }
    return 0;
}
