#include <bits/stdc++.h>
using namespace std;
vector<int> A[50001];
bool check[50001];
void DFS(int u) {
	check[u] = true;
	for (int x : A[u]) {
		if (!check[x]) {
			DFS(x);
		}
	}
}
int main() {
	memset(check, false, sizeof(check));
	for (int i = 0; i < 50001; i++)A[i].clear();
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	int cnt = 0;
	vector<int> V;
	for (int i = 1; i <= n; i++) {
		int dem = 0;
		memset(check, false, sizeof(check));
		check[i] = true;
		for (int j = 1; j <= n; j++) {
			if (j != i) {
				if (!check[j]) {
					dem++;
					DFS(j);
				}
			}
		}	
		cout << dem << endl;
	}
	return 0;
}