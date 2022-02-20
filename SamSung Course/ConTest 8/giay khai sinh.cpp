#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
struct mqh {
	string cha, con;
	int tuoi;
};
int n;
vector<pair<string, int> > res;
void Try(string s, int x, vector<mqh> a) {
	res.push_back({ s, x });
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s == a[i].cha) {
			Try(a[i].con, x - a[i].tuoi, a);
			cnt++;
		}
	}
	if (cnt == 0) return;
}
bool Comparation(pair<string, int> a, pair<string, int> b) {
	if (a.s == b.s)
		return a.f < b.f;
	return a.s > b.s;
}
int main() {
	int t; cin >> t;
	for(int j = 1; j <= t; j ++){
		cin >> n;
		res.clear();
		vector<mqh> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i].cha >> a[i].con >> a[i].tuoi;
		}
		Try("Ted", 100, a);
		sort(res.begin(), res.end(), Comparation);
		cout << "DATASET " << j << endl;
		int l = res.size();
		for (int i = 1; i < l; i++) {
			cout << res[i].f << " " << res[i].s << endl;
		}
	}
	return 0;
}