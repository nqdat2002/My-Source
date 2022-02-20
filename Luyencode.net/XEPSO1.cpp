#include <iostream>
#include <algorithm>
#include <string>

#define cin std::cin
#define cout std::cout
#define endl "\n"
#define for(i, a, b, x) for (int i = a; i != (b + x); i += x)
#define swap std::swap
#define sort std::sort
#define max std::max
#define min std::min

void backtrack_PhanTichSo(int, int);
void XepDiem1();

int number[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
long long T, n, max_number, min_number, digit_max, digit_min, secmin;
int arr[100];
int secarr[100];
bool smaller_six = false;

void backtrack_PhanTichSo(int count, int n) {
	for (i, 2, 7, 1) {
		if (i >= arr[count - 1] && n - i >= i) {
			arr[count] = i;
			backtrack_PhanTichSo(count + 1, n - i);
		}
	}
	arr[count] = n;
	if (n <= 7 && count == digit_min) {
		XepDiem1();
	}
}

void XepDiem1() {
	for (i, 1, digit_min, 1) {
		for (j, 0, 9, 1) {
			if (arr[i] == number[j]) {
				secarr[i] = j;
				break;
			}
		}
	}
	int index = 0;
	sort(secarr + 1, secarr + digit_min + 1);
	for (i, 1, digit_min, 1) {
		if (secarr[i] < 6) smaller_six = true;
		if (secarr[i] > 6 && smaller_six) {
			index = i - 1;
			secmin += 6;
			break;
		}
		if (secarr[i] != 0) {
			index = i;
			secmin += secarr[i];
			break;
		}
		if (i == digit_min) {
			index = i;
			secmin += 6;
		}
	}
	for (i, 1, digit_min, 1) {
		if (i == index) continue;
		secmin *= 10;
		secmin += secarr[i];
	}
	min_number = min(min_number, secmin);
	smaller_six = false;
	secmin = 0;
}
int main() {
	cin >> T;
	while (T--) {
		secmin = digit_min = digit_max = 0;
		max_number = 1;
		cin >> n;
		for (i, 1, n % 2, 1) max_number += 6;
		for (i, 1, n / 2 - 1, 1) {
			max_number *= 10;
			max_number++;
		}
		if (n == 3) {
			min_number = max_number = 7;
			cout << min_number << " " << max_number << endl;
			continue;
		}
		if (n == 6) {
			min_number = 6;
			cout << min_number << " " << max_number << endl;
			continue;
		}
		min_number = max_number;    
		if (n % 7 == 0) digit_min = n / 7;
		else digit_min = n / 7 + 1;
		arr[0] = 0;
		backtrack_PhanTichSo(1, n);
		cout << min_number << " " << max_number << endl;
	}
	return 0;
}
