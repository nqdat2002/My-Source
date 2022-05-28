#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, idx, a[100];
bool ok;
ll res;

void init(){
	cin >> n;
	memset(a, 0, sizeof(a));
	res = 1e18;
	ok = false;
	idx = 1;
}

void Try(int i){
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == idx){
			ll x = 0;
			for(int k = 1; k <= idx; k ++)
				x = 10 * x + a[k];
			x *= 9;
			if(x % n == 0 && x >= n){
				res = min(res, x);
				ok = true;
			}
		}
		else Try(i + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		init();
		while(idx < 18 && !ok){
			Try(1);
			idx++;
		}
		cout << res << endl;
	}
	return 0;
}
