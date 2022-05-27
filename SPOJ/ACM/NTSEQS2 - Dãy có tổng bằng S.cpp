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
// Date: 04/03/22 18:59
// Program: Day con co tong bang S
// -------------------  Your code STARTS here !!!---------------------------

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t = 1;
	while(t--){
		int n, S; cin >> n >> S;
		int a[n + 5];
		int dp[S + 1] = {0};
		for(int i = 1; i <= n; ++i) cin >> a[i];
		dp[0] = 1;
		for(int i = 1; i <= n; i++){
			for(int j = S; j >= 0; j--){
				if(dp[j] == 0 && dp[j - a[i]] == 1)
					dp[j] = 1;
			}
		}
		if(dp[S]) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
