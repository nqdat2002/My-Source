#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], cnt;
bool check(){
	int sum = 0;
	for(int i = 1; i <= n; ++i) if(a[i] == 1) sum += b[i];
	return sum == k;
}
void Try(int i){
	for (int j = 0; j <= 1; ++j){
		a[i] = j;
		if(i == n){
			if(check()){
				++cnt;
				for(int x = 1; x <= n; ++x){
					if(a[x] == 1) cout << b[x] << " ";
				}
				cout << endl;
			}
		}
		else Try(i + 1);
	}
}
int main(){
	freopen("test2.inp", "r", stdin);
	freopen("test2.out", "w", stdout);
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) cin >> b[i];
	cnt = 0;
	Try(1);
	if(cnt == 0) cout << -1 << endl;
	return 0;
}

