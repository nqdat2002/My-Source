#include <bits/stdc++.h>
// tham khao code cua ban hovanhung
typedef long long ll;
const ll MOD = 1e9 + 7;
using namespace std;
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (a[x] == 0)
            s.push_back(x);
        a[x]++;
    }
    cout<<s.size()<<endl;
    for (auto &i : s)
        cout<<i<<' '<<a[i]<<endl;
}
