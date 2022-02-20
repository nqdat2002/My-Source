#include <bits/stdc++.h>
using namespace std;
#define N 100100
int f[N], e[N], n;
float a[N], c[N], b[N], d[N];
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int main(){
//	FileIO();
	int t; cin >> t;
	while(t--){
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i] >> c[i];
		int m = 0, p = 0;
		for (int i = 1; i <= n; i++){
			f[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
			m = max(m, f[i]);
			b[f[i]] = a[i];
		}
		for(int i = n; i >= 1; i --){
			e[i] = lower_bound(d + 1, d + p + 1, c[i]) - d;
			p = max(p, e[i]);
			d[e[i]] = c[i];
		}
		cout << min(m, p) << endl;
	}
	return 0;
}
