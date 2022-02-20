#include <bits/stdc++.h>
typedef long long ll;
typedef long double lb;
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll c = round(pow(x, (1.0 / 3)));
        if (pow(c, 3) == x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
//code tham khao