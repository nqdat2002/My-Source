#include <iostream>
using namespace std;

bool f[5005][5005];
int n,m,a[15];

int main(){

	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> a[i];

	f[0][0] = true;
	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= n; j++){
			if (f[i][j]){
				for (int k = 0; k < m; k++){
					int tmp = j + a[k];
					if (tmp+i <= n) f[tmp+i][tmp] = true;
				}
			}
		}
	}
	int res = -1;
	for (int i = 1; i <= n; i++)
		if (f[n][i]) res = i;
	cout << res;
	return 0;
}
