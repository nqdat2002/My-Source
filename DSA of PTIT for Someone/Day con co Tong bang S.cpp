#include <bits/stdc++.h>
using namespace std;
int f[40001];
int main(){
	int t; cin >> t;
	while(t--){
		int n, S; cin >> n >> S;
		int a[n + 5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		memset(f, 0, sizeof(f));
		f[0] = 1;
		for(int i = 1; i <= n; i++){
			for(int j = S; j >= a[i]; j--){
				if(f[j] == 0 && f[j - a[i]] == 1) 
					f[j] = 1;
			}
		}
		if(f[S] == 1) 
			cout << "YES" << endl;	
		else cout << "NO" <<endl;
	}
}
