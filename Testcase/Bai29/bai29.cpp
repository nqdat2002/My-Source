#include <bits/stdc++.h>
using namespace std;
int n, a[15];
vector<string> v;
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n) {
			string t = "";
			for(int k = 1; k <= n; ++k){
				if(a[k] == 0) t += "6";
				else t += "8";
			}
			v.push_back(t);
		}
		else Try(i + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("4.inp", "r", stdin);
	freopen("4.out", "w", stdout);
	int t; cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		Try(1);
		cout << v.size() << endl;
		for(auto x: v) cout << x << " ";
		cout << endl;
	}
	return 0;
}
