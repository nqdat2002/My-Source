#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

using namespace std;
int	T;
int	value[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
void solve(ll L, ll R){
	int	Dmin = 207;
	int	Dmax = -207;
	for (ll i = L; i <= R; ++i)
	{
		ll	temp = i;
		int	soque = 0;
		while (temp > 0)
		{
			soque 	+= value[temp % 10];
			temp 	/= 10;
		}
		Dmax = max(Dmax, soque);
		Dmin = min(Dmin, soque);
	}
	cout << Dmin << " " << Dmax << endl;
}
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		cin >> T;
		cin.ignore();
		while (T--)
		{
			long long l, r; cin >> l >> r;
			solve(l, r);
		}
	return 0;
}
