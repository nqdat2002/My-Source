#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) a.begin(),a.end()

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date: 02/01/22 20:00
// Program:
// -------------------  Your code STARTS here !!!---------------------------

int n, k;
int a[20] = {0};
void read (){
	cin >> n >> k;
	a[0] = 0;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		a[i] = a[i - 1] + x;
	}
}
int cnt = 0;
void tim (int x, int bg, int ed, int K){
	if (bg > ed) return;
	if (K == 1){
		if (x == a[ed] - a[bg - 1]){
			cnt++;
			return;
		}
		else 
		return;
	}
	else if (K == 0) return;
	else{
		int BG = bg;
		for (int i = bg; i <= ed; i++)
			if (a[i] - a[BG - 1] == x)
				tim (x, i + 1, ed, K - 1);	
	}
}
 
int main (){
	read ();
	if (k == 1)
		cnt = 1;
	else{
		for (int i=1; i<=n; i++){
			int label = a[i];
			tim(label, i+1, n, k-1);
		}
	}
	cout << cnt << endl;
	return 0;
}
