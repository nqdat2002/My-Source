#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
    int n, m; cin >> n >> m;
	vector<int> v(n);
	vector<int> v1(m);
	for(int &x : v) cin >> x;
	for (int i = 0; i < m; i++)
	{
		cin >> v1[i];
		auto it = lower_bound(v.begin(), v.end(), v1[i]);
		if (it != v.end() && *it == v1[i])
		{
			cout<<(it - v.begin() + 1)<<" ";
		}
		else cout<<0<<" ";
	}
    return 0;
}
