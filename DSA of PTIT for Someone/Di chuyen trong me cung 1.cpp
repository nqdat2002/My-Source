#include <bits/stdc++.h>
using namespace std;
int a[100][100], n, k;
bool mr;
vector<string> res;
void Try(int i, int j, string s){
	if(i == 1 && j == 1 && !a[i][j]){
		mr = false;
		return;
	}
	if(i == n && j == n && a[i][j]){
		res.push_back(s);
		mr = true;
		return;
	}
	if(i < n && a[i + 1][j])
		Try(i + 1, j, s + "D");
	
	if(j < n && a[i][j + 1])
		Try(i, j + 1, s + "R");
	
	if((i < n && j < n && !a[i][j]) || i > n || j > n)
		return;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		res.clear();
		for(int i = 1; i <= n; i ++)
			for(int j = 1; j <= n; j ++)
				cin >> a[i][j];
		mr = false;
		Try(1, 1, "");
		if(!mr) cout << -1;
		else{
			sort(res.begin(), res.end());
			for(auto x: res) cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
