#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, S, a[35], res, cnt;
void init(){
	cin >> n >> S;
	res = oo;
	for(int i = 0; i < n; i ++) cin >> a[i];
	
}
void Try(int i, int sum, int cnt){
	if(sum > S || res < cnt)
		return;
	if(i == n){
		if(sum == S) 
			res = min(res, cnt);
		return;
	} 
	Try(i + 1, sum, cnt);
	Try(i + 1, sum + a[i], cnt + 1);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 1;
	while(t--){
		init();
		Try(0, 0, 0);
		if(res == oo) cout << -1 << endl;
		else cout << res << endl;
	}
	return 0;
}
