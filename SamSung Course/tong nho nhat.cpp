#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Solve(ll arr[], int n) {
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0)
            x = x * 10 + arr[i];
        else 
            y = y * 10 + arr[i];
    }
    return (ll)(x + y);
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << Solve(arr, n) << endl;
    }
    return 0;
}
