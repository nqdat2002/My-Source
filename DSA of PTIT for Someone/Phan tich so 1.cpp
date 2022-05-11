#include <bits/stdc++.h>
using namespace std;
int n, k, s, a[100];
vector<string> v;
void Try(int i, int k, int S){
	for(int j = k; j >= 1; --j){
		if(S + j <= n){
			S += j;
			a[i] = j;
			if(S == n){
				string r = "(";
				for(int k = 1; k < i; k ++) 
					r += (to_string(a[k]) + " ");
				r += (to_string(a[i]) + ")");
				v.push_back(r);
			}
			else Try(i + 1, j, S);
			S -= j;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		Try(1, n, 0);
		memset(a, 0, sizeof(a));
		for(auto x: v) cout << x << " ";
		cout << endl;
	}
	return 0;
}
