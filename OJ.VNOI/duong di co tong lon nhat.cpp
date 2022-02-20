#include<bits/stdc++.h>
using namespace std;
#define min -1000
typedef long long int ll;
int main(){
	int m, n;
	int res = 0;
	int a[200][200];
	cin >> m >> n;
	for(int i = 1; i <= m; i ++)
		for(int j = 1; j <= n; j ++)
			cin >> a[i][j];		
	for(int j= 0; j <= n; j ++){
		a[0][j] = a[m + 1][j] = min;
	}
	for(int j = 2; j <= n; j ++){
		for(int i = 1; i <= m; i ++)
			a[i][j] += max(a[i - 1][j - 1], max(a[i][j - 1],a[i + 1][j - 1]));
			res = a[1][n];
	}
	for(int i = 2; i <= m; i ++){
		res = max(res, a[i][n]);
	}
	cout << res;
	return 0;
}
