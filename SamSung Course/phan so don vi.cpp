#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve(ll t, ll m) {
    if (m == 0 || t == 0)
        return;
    if (m % t == 0) {
        cout << "1/" << (ll)(m / t) << endl;
        return;
    }
    if (t % m == 0) {
        cout << (ll)(t / m) << endl;
        return;
    }
    if (t > m) {
        cout << (ll)(t / m) << " + ";
        Solve((ll)(t % m), m);
        return;
    }
    ll n = (ll)(m / t) + 1;
    cout << "1/" << n << " + ";
    Solve((ll)(t * n) - m, (ll)(m * n));
}
int main() {
    int T; cin >> T;
    while (T--) {
    	ll t, m;
        cin >> t >> m;
        Solve(t, m);
    }
    return 0;
}
