#include <bits/stdc++.h>
using namespace std;
// day con co tong = S, khong can lien tiep
int n, S, a[1005], c[1005]; 
int qhd(int a[], int n, int S){
	int f[S + 1] = {0};
	f[0] = 1;
	for(int i = 1; i <= n; i ++){
		for(int j = S; j >= a[i]; j --){
			if(f[j] == 0 && f[j - a[i]] == 1)
				f[j] = 1;
		}
	}
	return f[S];
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> S;
		for(int i = 1; i <= n; i ++) cin >> a[i];
		if(qhd(a, n, S)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}