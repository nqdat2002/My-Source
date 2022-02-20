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
// Date: 18/02/22 07:46
// Program: Day Tam giac dai nhat
// -------------------  Your code STARTS here !!!---------------------------

int Solve(vector<int> a, int n) {
	vector<int> fre(n, 1); 
	vector<int>  fre2(n, 1);
	// tim xuoi
	for (int i = 1; i < n; i++) 
		for (int j = 0; j < i; j++) 
			if (a[i] > a[j])
				fre[i] = max(fre[i], fre[j] + 1);
	// tim nguoc			
	for (int i = n-2; i >=0; i--) 
		for (int j = n-1; j > i; j--) 
			if (a[i] > a[j])
				fre2[i] = max(fre2[i], fre2[j] + 1);
	// solve			
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (fre[i] + fre2[i] - 1 >  res)
			res = fre[i] + fre2[i] - 1;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for(auto &x: a) cin >> x;
		a.pb(0);
		int cnt = 1;
		vector<pair<int, int> > b;
		b.clear();
		for (int i = 1; i <= n; i++) {
			if (a[i] > a[i - 1]) 
				cnt++;
			else {
				b.pb({ i, cnt });
				cnt = 1;
			}
		}
		int res = 0;
		for (int i = 0; i < b.size(); i++) {
			int c = 0;
			for (int j = b[i].f; j < n && j > 0; j++) {
				if (a[j] < a[j - 1]) c ++;
				else 
					break;
			}
			res = max(res, b[i].s + c);
		}
		cout << res << endl;
	}
	return 0;
}
