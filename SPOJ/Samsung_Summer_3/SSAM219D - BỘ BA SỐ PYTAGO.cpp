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
// Date: 09/02/22 21:38
// Program: Bo ba Pytago ban de
// -------------------  Your code STARTS here !!!---------------------------

bool Check(ll a[], int n){
	sort(a, a + n );
    for (int i = 0 ; i < n ; i ++)
      a[i] = a[i] * a[i];
    for (int i = n - 1 ; i >= 2 ; i --) {
        int l = 0; 
        int r = i - 1; 
        while (l < r) {
            if (a[l] + a[r] == a[i])
                return true;
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }
    return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		if(Check(a, n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
