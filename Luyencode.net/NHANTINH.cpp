#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000;
int n;
int a[maxn+1];
int main(){
	ios_base::sync_with_stdio(0);
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> a[i];
	if (a[1]>=2)
	{
		cout << "NO";
		return 0;
	}
	for (int i=1; i<=n; i++)
	{
		int tmpA=a[i],tmpN=i;
		for (int j=2; j*j<=i; j++)
			while (tmpN%j==0)
			{
				tmpA/=a[j];
				tmpN/=j;
			}
		if (a[tmpN]!=tmpA)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
