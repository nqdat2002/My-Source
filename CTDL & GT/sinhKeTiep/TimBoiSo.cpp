#include <iostream>
#include <cmath>
using namespace std;

int n, a[10000000] = {0}, check, k;
long long result;

void soChia()
{
	result = 0;
	for (int i = k; i >= 1; i--)
	{
		result += a[i] * pow(10, k - i);
	}
}

bool chiaHet()
{
	soChia();
	if (result % n == 0)
		return 1;
	else
		return 0;
}
void khoiTao()
{
	a[1] = 9;
	for (int i = 2; i <= k; i++)
		a[i] = 0;
}

void next()
{
	if (chiaHet())
		check = 0;
	int i = k;
	while (check && a[i] == 9)
	{
		a[i] = 0;
		i--;
	}
	if (i < 1)
	{
		k++;
		khoiTao();
	}
	else
	{
		a[i] = 9;
	}
}

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		check = 1;
		cin >> n;
		k = 1;
		khoiTao();
		while (check)
		{
			next();
		}
		cout << result << endl;
	}
}
