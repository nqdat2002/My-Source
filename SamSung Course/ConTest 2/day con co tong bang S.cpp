#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100], b[100] , S;
ll n, m;
vector< vector<ll> > res;
void Init(){
	cin >> n >> S;
	m = n;
	for(int i = 1; i <= n; i ++) cin >> a[i];
}
void Try(int i){
	for(int j = 0; j <= 1; j ++){
		b[i] = j;
		if(i == n){
			int sum = 0;
			for(int k = 1; k <= n; k ++)
				if(b[k]) sum += a[k];
			if(sum == S){
				ll cnt = 0;
				for(int l = 1; l <= n; l ++)
					if(b[l]) cnt ++;
				m = min(cnt, m);
			}
		}
		else Try(i + 1);
	}
}
int main(){
	Init();
	Try(1);
	cout << m;
}
