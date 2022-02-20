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
		int n; cin >> n;
		vector<int> a(n);
		int res = 0, key = 0;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++){
			key += a[i];
			if(key > res)
				res = key;
			else if(key < 0) key = 0;
		}
		cout << res << endl;
	}
	return 0;
}

