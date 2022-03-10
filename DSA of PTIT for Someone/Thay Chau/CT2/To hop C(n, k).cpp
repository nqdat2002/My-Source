#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
ll c[1001][1001];
int main(){
	for(int i = 1; i <= 1000; i ++){
		for(int j = 0; j <= i; j ++){
			if(j == 0||j == i) 
				c[i][j] = 1; 
			else 
				c[i][j] = (c[i - 1][j] % mod + c[i - 1][j - 1] % mod) % mod; 
		} 
	} 
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << c[n][k] << endl;
	}
}
