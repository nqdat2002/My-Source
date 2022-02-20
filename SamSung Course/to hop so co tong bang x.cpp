#include <bits/stdc++.h>
using namespace std;
int n, S, a[50];
vector< vector <int> > res;
void inp(){
	cin >> n >> S;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
}
void Try(int i, int Sum, vector<int> v){
	if(Sum > S) return;
	if(Sum == S){
		res.push_back(v);
		return;
	}
	for(int j = i; j <= n; j ++){
		if(Sum + a[j] <= S){
			v.push_back(a[j]);
			Try(j, Sum + a[j], v);
			v.pop_back();
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		vector<int> v;
		v.clear();
		res.clear();
		Try(1, 0, v);
		if(res.size() == 0){
			cout << "-1" << endl;
			continue;
		}
		for(int i = 0; i < res.size(); i ++){
			cout << "[";
			for(int j = 0; j < res[i].size() - 1; j ++)
				cout << res[i][j] << " ";
			cout << res[i][res[i].size() - 1] << "]";
		}
		cout << endl;
	}
	return 0;
}


