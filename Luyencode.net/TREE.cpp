//Denote K be the diameter of the tree.
//There are K + 1 vertices on the path between a and b. We have the value of these vertices are:
//- K even: {K, K - 1, K - 2, ..., K / 2 + 1, K / 2, K / 2 + 1, ..., K - 1, K}
//- K odd: {K, K - 1, K - 2, ..., (K + 1) / 1 + 1, (K + 1) / 2, (K + 1) / 2, (K + 1) / 2 + 1, ..., K - 1, K}
//Thing need to do left is check if these sequence exit in init array.
//If there is, the answer is possible. Otherwise, the answer is impossible.

#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 10;

int n, d;
int a[maxn], cnt[maxn];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", a + i);
		cnt[a[i]]++;
		d = max(d, a[i]);
	}
	int lim = (d + 1) / 2;
	int sum = 0;
	for (int i = lim + 1; i <= d; ++i) {
		sum += (cnt[i] >= 2) ? cnt[i] : -sum;
	}
	sum += (cnt[lim] == 1 + d % 2) ? cnt[lim] : -sum;
	cout << (sum == n ? "Possible" : "Impossible") << endl;
	return 0;
}
