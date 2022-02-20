#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<float,float>> M(n);
		for (int i = 0; i < n; i++)cin >> M[i].first >> M[i].second;
		int N[1000] = { 1 };
		int res = 1;
		for (int i = 1; i < n; i++) {
			int m = 0;
			N[i] = 1;
			for (int j = 0; j < i; j++) {
				if (M[j].first<M[i].first && M[j].second>M[i].second) {
					m = max(m, N[j]);
				}
			}
			N[i] += m;
			res = max(res, N[i]);
		}
		cout << res << endl;
	}
}
