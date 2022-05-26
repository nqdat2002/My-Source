#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;
const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;
 
#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
 
// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 02/03/22 07:59
// Program: cai tui
// -------------------  Your code STARTS here !!!---------------------------
 
int n, k, a[1005], c[1005], f[1005][1005]; 
 
int dp(){
	memset(f, 0, sizeof(f)); 
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= k; j ++){
			if(j >= a[i] && f[i - 1][j - a[i]] + c[i] > f[i - 1][j]) 
				f[i][j] = f[i - 1][j - a[i]] + c[i];
			else 
				f[i][j] = f[i - 1][j]; 
		} 
	} 
	return f[n][k]; 
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t = 1;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i ++) cin >> a[i] >> c[i]; 
		//for(int i = 1; i <= n; i ++) cin >> c[i]; 
		cout << dp() << endl; 
	} 
	return 0;
} 
