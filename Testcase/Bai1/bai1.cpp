#include <bits/stdc++.h>
using namespace std;
int n, k, c[100], b[100];
void Try(int i){
	for(int j = c[i - 1] + 1; j <= n - k + i; ++j){
		c[i] = j;
		if(i == k){
			for(int x = 1; x <= k; ++x)
				cout << c[x];
			cout << " ";
		}
		else Try(i + 1);
	}
}
void FileIO() {
	freopen("test6.inp", "r", stdin);
	freopen("test6.out", "w", stdout);
}
int main(){
	//FileIO();
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}

