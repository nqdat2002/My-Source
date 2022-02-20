#include<iostream>
#include<stdbool.h>

using namespace std;

void nhap (int n, int a[]) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int min (int n, int a[]) {
	int c = a[0];
	for (int i = 1; i < n; i++) {
		if (c > a[i]) {
			c = a[i];
		}
	}
	return c;
}

void timb (int n, int a[], int b[], int m) {
	for (int i = 0; i < n; i++) {
		int q = 1;
		while (q <= a[i] / 2 + 1) {
			int du = a[i] - (m*q);
			if (du < q && du >= 0) {
				b[i] = q;
				break;
			}
			q++;
		}
	}
}

bool check (int n, int b[]) {
	for (int i = 0; i < n; i++) {
		if (b[i] == 0) {
			return false;
		}
	}
	return true;
}

int sum (int n, int b[]) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += b[i];
	}
	return s;
}

int main () {
	int n;
	cin >> n;
	int a[n];
	nhap (n,a);
	int m = 1, c = min (n,a);
	int kq = sum(n,a);
	while (m <= c) {
		int b[n] = {0};
		timb(n,a,b,m);
		if (check(n,b)) {
			if (kq > sum (n, b)) {
				kq = sum (n, b);
			}
		}
		m++;
	}
	cout << kq;
	return 0;
}