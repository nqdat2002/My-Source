#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("4.inp", "r", stdin);
	freopen("4.out", "w", stdout);
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        auto it = lower_bound(a, a + m, b[i]);
        if(*it == b[i])
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}
