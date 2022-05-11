#include <bits/stdc++.h>
using namespace std;
vector<string> v;
int n, k, c[100];
void Try(int i){
	for(int j = c[i - 1] + 1; j <= n - k + i; ++j){
		c[i] = j;
		if(i == k){
			for(int h = 1; h <= k; ++h)
				cout << v[c[h] - 1] << " ";
			cout << endl;
		}
		else Try(i + 1);
	}
}
int main(){
	cin >> n >> k;
	set<string> s;
	v.clear();
	for(int i = 0; i < n; ++i){
		string m; cin >> m;
		s.insert(m);
	}
	n = s.size();
	for(auto &x: s) v.push_back(x);
	Try(1);
}
