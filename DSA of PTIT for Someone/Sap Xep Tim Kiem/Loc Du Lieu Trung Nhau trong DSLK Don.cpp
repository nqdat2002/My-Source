#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[1005];
	for(int i = 0; i < n; i ++) cin >> a[i];
	bool check[1005];
	memset(check, false, sizeof(check));
	for(int i = 0; i < n; i ++){
		if(!check[a[i]]){
			cout << a[i] << " ";
			check[a[i]] = true;
		}
	}
	return 0;
}
