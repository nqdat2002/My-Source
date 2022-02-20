#include <bits/stdc++.h>
using namespace std;
bool ok = false;
void Chl(int* M, int n) {
	int a = 0;
	for (int i = n; i > 0; i--) {
		if (M[i] != n) {
			M[i]++;
			for (int j = i + 1; j <= n; j++)
				M[j] = 1;
			a = 1;
			break;
		}
	}
	if (a == 0)ok = true;
}
bool ok1 = false;
void Try(int* M, int n) {
	int a = 0;
	for (int i = n - 1; i > 0; i--) {
		if (M[i] < M[i + 1]) {
			a = 1;
			int k = n;
			while (M[i] > M[k])
				k--;
			swap(M[k], M[i]);
			int l = i + 1, r = n;
			while (l <= r) {
				swap(M[l], M[r]);
				l++; r--;
			}
			break;
		}
	}
	if (a == 0) ok1 = true;
}
int main() {
	int n; cin >> n;
	int M[10], N[10];
	for (int i = 1; i <= n; i++) {
		M[i] = i; N[i] = 1;
	}
	while (!ok1) {
		ok = false;
		while (!ok) {
			for (int i = 1; i <= n; i++) cout << char(M[i] + 64);
			for (int i = 1; i <= n; i++) cout << N[i];
			Chl(N, n);
			cout << endl;
		}
		for (int i = 1; i <= n; i++)
			N[i] = 1;
		Try(M, n);
	}
	return 0;
}
