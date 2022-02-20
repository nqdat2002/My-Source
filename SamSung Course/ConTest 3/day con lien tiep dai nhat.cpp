#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m = 1e7;
ll n, x, a[m], d[m], f[m];
ll ans = 0;
void update(ll x, ll val){
    while(x <= m){
        d[x] = min(d[x], val);
        x += (x & -x);
    }
}
ll get(ll x){
    ll res = n + 1;
    while(x){
        res = min(res, d[x]);
        x -= (x & -x);
    }
    return res;
}
int main(){
    cin >> n >> x;
    n++;
    for(ll i = 2; i <= n; i ++){
        cin >> a[i];
        a[i] -= x;
    }
    a[1] = 0;
    for(ll i = 2; i <= n; i ++){
        f[i] = f[i - 1] + a[i];
        a[i] = f[i];
    }
    for(ll i = 1; i <= n; i ++)
        d[i] = n + 2;
    sort(f + 1, f + 1 + n);
    for(ll i = 1; i <= n; i ++)
        a[i] = lower_bound(f + 1,f + 1 + n, a[i]) - f;
    update(a[1], 1);
    for(ll i = 2; i <= n; i ++){
        ll idx = get(a[i]);
        ans = max(ans, i - idx);
        update(a[i], i);
    }
    cout << ans << endl;
    return 0;
}
