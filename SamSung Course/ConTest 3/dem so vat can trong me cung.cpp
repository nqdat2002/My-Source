#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
char a[1000][1000];
void Solve(){
	int m, n, cnt = 0;
	cin >> m >> n;
	for(int i = 0; i < m; i ++)
		for(int j = 0; j < n; j ++)
			cin >> a[i][j];
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++){
			if(a[i][j] == '#') cnt ++;
			if(a[i][j] == '#' && a[i][j + 1] == '#') cnt --;
			if(a[i][j] == '#' && a[i + 1][j] == '#') cnt --;
		}
	}
	cout << cnt << endl;
}
int main(){
	Solve();
	return 0;
}

