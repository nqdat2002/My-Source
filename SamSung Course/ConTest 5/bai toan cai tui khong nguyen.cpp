#include <bits/stdc++.h>
using namespace std;

struct XXX {
	int a, b;
	float c;
};
bool cmp(XXX A, XXX B) {
	return A.c > B.c;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		XXX M[1000];
		for (int i = 0; i < n; i++) {
			cin >> M[i].a >> M[i].b;
			M[i].c =(float) M[i].a / M[i].b;
		}
		sort(M, M + n, cmp);
		float sum = 0;
		int s = 0;
		int i = 0;
		while (s<=m&&i<n) {
			s += M[i].b;
			sum += (float)M[i].a;
			i++;
		}
		if(s>m)
		sum -= (float)(s - m) * M[i-1].c;
		cout <<fixed<<setprecision(2)<< sum << endl;
	}
	return 0;
}