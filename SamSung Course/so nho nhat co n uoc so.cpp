#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
const ll maxi = LONG_LONG_MAX;
ll p[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
ll n, res = maxi;
void Try(int i, ll a, int b){
	if(b > n) return;
	if(b == n)
		res = min(a, res);
	for(int j = 1;;j++){
		if(a * p[i] > res) break;
		a *= p[i];
		if (a < 0)
			break;
		Try(i + 1, a , b * (j + 1));
	}
}
int main(){
	run1
	while(t--){
	   cin >> n;
	   res = maxi;
	   Try(0, 1, 1);
	   cout << res << endl;
	}
	return 0;
}

