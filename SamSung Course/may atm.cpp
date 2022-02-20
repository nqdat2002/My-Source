#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, S, a[35], res = 1e5;
void Try(ll i, ll sum, ll cnt) {
    if (sum > S || cnt > res)
        return;
    if (i == n) {
        if (sum == S)
            res = min(res, cnt);
        return;
    }
    Try(i + 1, sum, cnt);
    Try(i + 1, sum + a[i], cnt + 1);
}
int main() {
    int t; cin >> t;
    while (t--) {
        res = 1e5;
        cin >> n >> S;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        Try(0, 0, 0);
        if (res == 1e5)
            cout << -1 << endl;
        else 
            cout << res << endl;
    }
    return 0;
}
