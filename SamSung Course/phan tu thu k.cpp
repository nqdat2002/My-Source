#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main(){
	run1
	while(t--){
	   	int n, m, k; cin >> m >> n >> k;
	   	vector<int> x(m + n);
	   	for(int i = 0; i < m + n; i ++) cin >> x[i];
	   	sort(x.begin(), x.end());
	   	cout << x[k - 1] << endl;
	}
	return 0;
}

