#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n; cin >> n;
	if(n == 0){
		cout << 1;
		return 0;
	}
	cout << n * n - n + 2;
}
