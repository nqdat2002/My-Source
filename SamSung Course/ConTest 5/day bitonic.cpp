#include <bits/stdc++.h>
using namespace std;
int n, a[105];
int f1[105], f2[105];
int res;
void Solve() {
    // xuoi
    for (int i = 2; i <= n; i ++) 
        for (int j = 1; j < i; j ++) 
            if (a[j] < a[i] && f1[j] + a[i] > f1[i])
                f1[i] = f1[j] + a[i];
    // nguoc
    for (int i = n - 1; i >= 1; i --) 
        for (int j = n; j > i; j --) 
            if (a[i] > a[j] && f2[j] + a[i] > f2[i])
                f2[i] = f2[j] + a[i];
    // key
    for (int i = 1; i <= n; i ++)
        res = max(res, f1[i] + f2[i] - a[i]);
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i ++) {
            cin >> a[i];
            f1[i] = f2[i] = a[i];     
        }
        res = 0;
        Solve();
    }
    return 0;
}