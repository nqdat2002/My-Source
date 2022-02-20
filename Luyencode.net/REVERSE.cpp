#include <bits/stdc++.h>
using namespace std;
int chec[200200], t, x;
string s;
int main()
{
	cin >> s >> t;
	s = '#' + s;
	int n = s.size();
	while (t--)
	{
		cin >> x;
		chec[x]++;
		chec[n - x + 2]--;
	}
	for (int i = 1; i <= n; i++)
		chec[i] += chec[i - 1];
	for (int i = 1; i <= n / 2; i++)
		if (chec[i] & 1)
			swap(s[i], s[n - i]);
	s.erase(0,1);
	cout << s;
	return 0;
}