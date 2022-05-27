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
// Date: 12/03/22 09:50
// Program: Day con lien tiep co tong bang K
// -------------------  Your code STARTS here !!!---------------------------

void Solve1(ll a[], int n, ll k){
	if(k == 0){
		cout << "NO";
		return;
	}
	set<ll> s;
	for(int i = 0; i < n; i++) s.insert(a[i]);
	int sz = s.size();
	s.insert(k);
	if(s.size() == sz){
		cout << "YES";
		return;
	}
	else s.erase(k);
	for(int i = 0; i < n; i ++){
		ll t = k + a[i];
		s.insert(t);
		if(s.size() == sz){
			cout << "YES";
			return;
		}
		else s.erase(t);
	}
	cout << "NO";
}

bool Binary_Search(ll a[], int l, int r, ll x){
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x)
			return true;
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return false;
}

void Solve2(ll a[], int n, ll k){
    if(k == 0){
        cout << "NO";
        return;
    }
	if(Binary_Search(a, 0, n - 1, k)){
		cout << "YES";
		return;
	}
	for(int i = 0; i < n; i ++){
		ll x = a[i] + k;
		if(Binary_Search(a, 0, n - 1, x)){
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n], k; 
		cin >> k;
		for(auto &x: a) cin >> x;
		for(int i = 1; i < n; i ++) a[i] += a[i - 1];
		Solve2(a, n, k);
		cout << endl;
	}
	return 0;
}
