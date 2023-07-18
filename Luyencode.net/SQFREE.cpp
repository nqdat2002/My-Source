#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
void find(ll n) {
    for (ll i = 2; i * i * i <= n; ++i) {
        ll t = 0;
        while (n % i == 0) {
            ++t;
            n /= i;
            if (t > 1) {
                cout << "YES";
                return;
            }
        }
    }
    ll u = sqrt(n);
    if (u * u == n) cout << "YES";
    else cout << "NO";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    long long n;
    cin >> n;
    find(n);

}
