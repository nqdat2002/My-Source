#include <iostream>
using namespace std;

#define ll long long
#define X first
#define Y second

const ll inf = 1e18;
bool dau[404][404];
ll a[440];
int n;
pair <ll,ll> f[404][404];

void DP(int l,int r){

	if (l == r){
		f[l][r] = {a[l],0};
		dau[l][r] = true;
		return;
	}
	if (l == r-1){
		f[l][r] = {a[l] + a[r],a[l] + a[r]};
		dau[l][r] = true;
		return;
	}
	for (int i = l; i < r; i++){
		if (!dau[l][i]) DP(l,i);
		if (!dau[i+1][r]) DP(i+1,r);

		if (f[l][r].Y > f[l][i].X + f[i+1][r].X + f[l][i].Y + f[i+1][r].Y){
			f[l][r].X = f[l][i].X + f[i+1][r].X;
			f[l][r].Y = f[l][i].Y + f[i+1][r].Y + f[l][r].X;
		}
	}
	dau[l][r] = true;
}
int main(){

	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		for (int j = 1; j <= n; j++) f[i][j] = {inf,inf};
	}
	DP(1,n);
	cout << f[1][n].Y;
	return 0;
}
