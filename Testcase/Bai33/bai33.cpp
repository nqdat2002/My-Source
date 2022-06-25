#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int res;
void Try(int n, int cnt){
	if(cnt > res) return;
	if(n == 1){
		res = min(res, cnt);
		return;
	}
	if(n % 3 == 0) Try(n / 3, cnt + 1);
	if(n % 2 == 0) Try(n / 2, cnt + 1);
	if(n - 1 > 0) Try(n - 1, cnt + 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("0.inp", "r", stdin);
	freopen("0.out", "w", stdout);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		res = INT_MAX;
		Try(n, 0);
		cout << res << endl;
	}
	return 0;
}
