#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100005], a[100005];
int main(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dp[1] = a[1];
    for (int i = 2; i <= n; i++) dp[i] = max(dp[i - 1], a[i]);
    for (int i = 1; i <= k; i++) {
        ll x; cin >> x;
        cout << dp[x] << endl;
    }
    return 0;
}