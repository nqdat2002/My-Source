#include <bits/stdc++.h>
using namespace std;
int a[25], c[25], n, k;
set<string> res;
bool check(){
	for(int i = 1; i < k; i ++){
		if(a[c[i]] > a[c[i + 1]])
			return false;
	}
	return true;
}
void Try(int i){
	for(int j = c[i - 1] + 1; j <= n - k + i; j ++){
		c[i] = j;
		if(i == k){
			if(check()){
				string t = "";
				for(int i = 1; i <= k; i ++)
					t += (" "+to_string(a[c[i]]));
				t.erase(0, 1);
				res.insert(t);
			}
		}
		else Try(i + 1);
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++) cin >> a[i];
	for(int l = 2; l <= n; l ++){
		k = l;
		memset(c, 0, sizeof(c));
		Try(1);
	}
	for(auto x: res) cout << x << endl; 
	return 0;
}
