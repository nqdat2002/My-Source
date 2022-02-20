#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005], S, b[1005];
int res = 0;
void inp(){
	cin >> n >> S;
	k = 3;
	for(int i = 1; i <= n; i ++) cin >> b[i];
}
void in(){
	int sum = 0;
	for(int i = 1; i <= k; i ++)
		sum += b[a[i]];
	if(sum <= S && S - res >= S - sum) 
		res = sum;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		Try(1);
		cout << res << endl;
	}
}

