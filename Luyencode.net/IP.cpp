#include <bits/stdc++.h>
using namespace std;
const int xmax = 100005;
int main(){
    long long n, a[xmax], dp[xmax], ans;
    cin >> n;
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] <= n + 1)
            dp[a[i]]++;
    }
    for (int i = 1; i <= n + 1; i++)
        if (dp[i] == 0){
            ans = i;
            break;
        }
    cout << ans;
    return 0;
}
