#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#define N 1000005
using namespace std;
int main() {
	int T, n;
	double Sum[N];
	cin >> T;
	int x=1;
	Sum[1] = 1;
    for (int i = 3; i <= 10*N; i+=2)
    {	x=x+1;
        Sum[x] = Sum[x - 1] + (double)1/i;
    }
	for (int i = 0; i < T; ++i)
	{
		cin >> n;
		cout << fixed << setprecision(5) << Sum[n] << "\n";
	}
}
