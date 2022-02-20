#include <bits/stdc++.h>
using namespace std;
int a[35][35], n, m, k, k2;
int c[15];
vector<vector<int> > res;
int sum (vector<int> &b){
	int s = 0, n = b.size();
	for(int i = 0; i < n; i ++)
		s += b[i];
	return s;
}
void outp();
void inp(){
	cin >> m >> n;
	for(int i = 1; i <= m; i ++){
		for(int j = 1; j <= n; j ++){
			cin >> a[i][j];
		}
	}
}
void Try(int i){
	for(int j = c[i - 1] + 1; j <= m - k + i; j ++){
		c[i] = j;
		if(i == k) outp();
		else Try(i + 1);
	}
}
void outp(){
	vector<int> t;
	for(int j = 1; j <= n; j ++){
		int s = 0;
		for(int i = 1; i <= k; i ++){
			s += a[c[i]][j];
		}
		if(s == 1 || s == 0)
			t.push_back(s);
		else
			return;
	}
	if(sum(t) == 14){
		vector<int> ans(m, 0);
		for(int i = 1; i <= k; i ++)
			ans[c[i] - 1] = 1;
		res.push_back(ans);
	}
	t.clear();
}
int main(){
	inp();
	for(int i = 1; i <= m; i ++){
		k = i;
		for(int j = 1; j <= k; j ++) 
			c[j] = j;
		Try(1);
	}
	int len = res.size();
	sort(res.begin(), res.end());
	for(int i = 0; i < len; i ++){
		int l = res[i].size();
		for(int j = 0; j < l; j ++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}