#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MOD = 1e9 + 7;
ll k, m;
struct Mat
{
    ll a[15][15];
};
Mat operator*(Mat mtr1, Mat mtr2)
{
    Mat res;
    memset(res.a, 0, sizeof(res.a));
    for (ll i = 1; i <= k; i++)
    {
        for (ll j = 1; j <= k; j++)
        {
            for (ll q = 1; q <= k; q++)
            {
                ll temp = (mtr1.a[i][q] * mtr2.a[q][j]) % MOD;
                res.a[i][j] = (res.a[i][j] + temp) % MOD;
            }
        }
    }
    return res;
}
Mat Power(Mat a, ll p)
{
    if (p == 1)
        return a;
    Mat ans = Power(a, p / 2);
    if (p % 2)
        return ans * ans * a;
    return ans * ans;
}
int main()
{
    cin >> k >> m;
    Mat m1, m2;
    memset(m1.a, 0, sizeof(m1.a));
    memset(m2.a, 0, sizeof(m2.a));
    for (ll i = 0; i < k; i++)
    {
        ll alpha;
        cin >> alpha;
        m1.a[1][k - i] = alpha;
    }
    for (ll i = 0; i < k; i++)
    {
        ll ci;
        cin >> ci;
        m2.a[k - i][1] = ci;
    }
    for (ll i = 2; i <= k; i++)
        m1.a[i][i - 1] = 1;
    vector<ll> arr(m);
    for (auto &x : arr)
        cin >> x;
    for (ll i = 0; i < m; i++)
    {
        if (arr[i] <= k)
        {
            arr[i] = m1.a[1][arr[i]];
            continue;
        }
        Mat qans = Power(m1, arr[i] - k);
        qans = qans * m2;
        arr[i] = (qans.a[1][1] + MOD) % MOD;
    }
    for (auto x : arr)
        cout << x << " ";
    return 0;
}
