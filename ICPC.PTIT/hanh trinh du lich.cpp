#include <bits/stdc++.h>
using namespace std;
int ck[100];
int n;
long c[20][20], x[100], s = 0, res = 1e7, cmin = 1e7, xres[100];
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			cin >> c[i][j];
			cmin = min(cmin, c[i][j]);
		}
	}
}
void Try(int i){
	if(s + cmin * (n - i + 1) >= res) return;
	for(int j = 1; j <= n; j ++){
		if(ck[j]){
			x[i] = j;
			ck[j] = 0;
			s += c[x[i - 1]][j];
			if(i == n){
				if(s + c[x[n]][x[1]] < res)
					res = s + c[x[n]][x[1]];
			}
			else Try(i + 1);
			s -= c[x[i - 1]][j];
			ck[j] = 1;
		}

	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(ck, 1, sizeof(ck));
		ck[1] = 0;
		inp();
		Try(1);
		cout << res << endl;
	}

	return 0;
}