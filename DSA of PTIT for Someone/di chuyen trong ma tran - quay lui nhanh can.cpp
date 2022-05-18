#include <bits/stdc++.h>
using namespace std;
int pas(int k, int n){
	if(k == 0 || k == n) 
        return 1;
	else
        return pas(k - 1, n - 1) + pas(k, n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int m, n; cin >> m >> n;
		int a[100][100];
		for(int i = 0; i < m; i ++)
			for(int j = 0; j < n; j ++)
				cin >> a[i][j];
		cout << pas(n - 1, m - 1 + n - 1) << endl;
	}
	return 0;
}
