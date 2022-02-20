#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
ll n, a[100009],b[100009],c[100009];
ll d[100009][4];
ll solve(int i, int p) {
	if(i == n)
		return 0;
	if(d[i][p] != -1)
		return d[i][p];
	ll ans = INT_MIN;
	if(p == 0){
		ans = max(ans, b[i] + solve(i + 1, 1));
		ans = max(ans, c[i] + solve(i + 1, 2));
	} else if(p == 1){
		ans = max(ans, a[i] + solve(i + 1, 0));
		ans = max(ans, c[i] + solve(i + 1, 2));
	} else if(p == 2){
		ans = max(ans, b[i] + solve(i + 1, 1));
		ans = max(ans, a[i] + solve(i + 1, 0));
	} else{
		ans = max(ans, c[i] + solve(i + 1, 2));
		ans = max(ans, b[i] + solve(i + 1, 1));
		ans = max(ans, a[i] + solve(i + 1, 0));
	}
	return d[i][p] = ans;
}
int main() {
	memset(d, -1, sizeof(d));
	cin>>n;
	for(int i = 0; i < n; i++) {
        cin>>a[i]>>b[i]>>c[i];
    }
	ll ans = solve(0, 3);
	cout<<ans<<endl;
}
