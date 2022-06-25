#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, k;
vector<ll> res;
void Solve(){
	cin >> n >> m >> k;
	vector<ll> a(n), b(m), c(k);
	for(auto &x: a) cin >> x;
	for(auto &y: b) cin >> y;
	for(auto &z: c) cin >> z;
	
	int i = 0, j = 0, l = 0;
	res.clear(); // n, m, k la so phan tu cua mang
	while(i < n && j < m && l < k){
		if(a[i] == b[j] && b[j] == c[l]){
			res.push_back(a[i]);
			++ i;
			++ j;
			++ l;
		}
		else if(a[i] <= b[j] && a[i] <= c[l]){
			++ i;
		}
		else if(b[j] <= a[i] && b[j] <= c[l]){
			++ j;
		}
		else
			++ l;
	}
	if(res.size() == 0)
		cout << -1;
	else
		for(int i = 0; i < res.size(); i++) 
			cout <<  res[i] << " ";
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("4.inp", "r", stdin);
	freopen("4.out", "w", stdout);
	int t; cin >> t;
	while(t --){
		Solve();
		cout << endl;
	}
	return 0;
}
