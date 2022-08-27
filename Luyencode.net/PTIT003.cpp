#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int a[n];
	for (int i=1; i<n; i++) cin >> a[i];

	vector <int> v={0};
	for (int i=1; i<n; i++)
	{
		v.push_back(v.back()+a[i]);
	}
	vector <int> v_tmp(v);
	sort(v_tmp.begin(),v_tmp.end());
	for (int i=1; i<n; i++)
	{
		if (v_tmp[i]-v_tmp[i-1]==1) continue;
		else
		{
			cout << "-1";
			return 0;
		}
	}
	int cl=1-v_tmp.front();
	for (int i=0; i<n; i++) cout << v[i]+cl << " ";
	return 0;
}
