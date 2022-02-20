#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll u, v, a, b;
void ip(){ 
	cin >> a >> b >> u >> v;
}
ll ucln(ll x, ll y) {
    ll t;
    while (y != 0) {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}
void op() {
    if (ucln(a, b) == ucln(u, v))
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main() {
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        ip();
        op();
    }
    return 0;
}
