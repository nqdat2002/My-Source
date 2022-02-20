#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int tinh(ll n){
	queue<ll> q;
	int cnt = 0;
	q.push(1);
	while(!q.empty()){
		ll x = q.front();
		q.pop();
		if(x <= n){
			cnt ++;
			q.push(x * 10);
			q.push(x * 10 + 1);
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n;
//		cout << tinh(n) << endl;
		cin >> n;
/*				cout << tinh(n) << endl;
		vector<int> a;
		while(n){
			a.push_back(n % 10);
			n/= 10;
		}
		reverse(a.begin(), a.end());
		int idx = a.size();
		for(int i = 0; i < a.size(); i ++){
			if(a[i] >= 2){
				idx = i;
				break;
			}
		}
		for(int i = idx; i < a.size(); i ++)
			a[i] = 1;
		long long res = 0;
		int x = 1;
		for(int i = a.size() - 1; i >= 0; i --){
			res += a[i] * x;
			x = x * 2;
		}
		cout << res << endl; */
	}
	return 0;
}