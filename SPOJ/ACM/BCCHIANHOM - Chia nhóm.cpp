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
// Date: 18/02/22 14:10
// Program: Chia deu
// -------------------  Your code STARTS here !!!---------------------------
 
int n, k;
int a[20];
int cnt;
 
void init(){
	cin >> n >> k;
	cnt = 0;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i ++){
		int x; cin >> x;
		a[i] = a[i - 1] + x;
	}
}
void Try(int u, int b, int e, int k){
	if(b > e || k == 0)
		return;
	if(k == 1){
		if(a[e] - a[b - 1] == u){
			cnt ++;
			return;
		}
		else return;
	}
	int s = b;
	for (int i = b; i <= e; i ++){
		if (a[i] - a[s - 1] == u)
			Try(u, i + 1, e, k - 1);
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	init();
	if(k == 1) cnt = 1;
	else{
		for(int i = 1; i <= n; i ++){
			int x = a[i];
			Try(x, i + 1, n, k - 1);
		}
	}
	cout << cnt << endl;
	return 0;
} 
