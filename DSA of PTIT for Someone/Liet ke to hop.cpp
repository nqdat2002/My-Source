#include <bits/stdc++.h>
using namespace std;
int n, k, a[25];
vector<int> v;
void in(){
	for(int i = 1; i <= k; i ++)
		cout << v[a[i] - 1] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}
int main(){
	cin >> n >> k;
	set<int> s;
	for(int i = 1; i <= n; i ++){
		int x; cin >> x;
		s.insert(x);
	}
	for(auto x: s) v.push_back(x);
	n = v.size();
	Try(1);
	return 0;
}
