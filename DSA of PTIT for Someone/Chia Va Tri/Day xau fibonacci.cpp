#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fb[100], k;
int n;

char fiboW(int n, ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k < fb[n - 2]) 
		return fiboW(n - 2, k);
	return fiboW(n - 1, k - fb[n - 2]);
}

int main(){
	fb[0] = 0; fb[1] = 1;
	for(int i = 2; i <= 92; i ++)
		fb[i] = fb[i - 1] + fb[i - 2];
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << fiboW(n, k - 1) << endl;
	}
	return 0;
}
