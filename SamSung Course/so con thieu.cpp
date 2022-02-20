#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long n,i,j;
		cin >> n;
		long a[n];
		int m = n - 1;
		for(i = 0; i < m; i ++){
			cin >> a[i];
		}	
		long long t=((long long)n*(n + 1)/2);
		for(i = 0; i < m; i ++){
			t = t - a[i];
		}
		cout << t << endl;
	}
	return 0;
}
