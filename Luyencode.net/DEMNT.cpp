// CPP program to find the number of pairs
// such that gcd equals to 1
#include <bits/stdc++.h>
using namespace std;

#define N 1000500
int lpf[N], mobius[N];
void least_prime_factor(){
	for (int i = 2; i < N; i++)
		if (!lpf[i])

			for (int j = i; j < N; j += i)
				if (!lpf[j])
					lpf[j] = i;
}
void Mobius(){
	for (int i = 1; i < N; i++) {

		if (i == 1)
			mobius[i] = 1;
		else {

			if (lpf[i / lpf[i]] == lpf[i])
				mobius[i] = 0;

			else
				mobius[i] = -1 * mobius[i / lpf[i]];
		}
	}
}
int gcd_pairs(int a[], int n)
{
	int maxi = 0;
	int fre[N] = { 0 };
	for (int i = 0; i < n; i++) {
		fre[a[i]]++;
		maxi = max(a[i], maxi);
	}

	least_prime_factor();
	Mobius();
	int ans = 0;
	for (int i = 1; i <= maxi; i++) {
		if (!mobius[i])
			continue;

		int temp = 0;
		for (int j = i; j <= maxi; j += i)
			temp += fre[j];

		ans += temp * (temp - 1) / 2 * mobius[i];
	}
	return ans;
}
int main(){	int n; cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;
	cout << gcd_pairs(a, n);

	return 0;
}
