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
// Date: 12/02/22 09:43
// Program: Ma Gray 1
// -------------------  Your code STARTS here !!!---------------------------
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int t = 1;
	while(t--){
		int n;cin >> n;
		vector <string> str;
		if(n > 0){
			str.push_back("0");
			str.push_back("1");
			int i, j;
			for(i = 2; i < (1 << n); i = i << 1){
				for(j = i - 1; j >= 0; j --){
					str.push_back(str[j]); 
				} 
				for(j = 0; j < i; j ++){
					str[j] = "0" + str[j]; 
				} 
				for(j = i; j < 2 * i; j ++){
					str[j] = "1" + str[j]; 
				} 
			}
			for(i = 0; i < str.size(); i ++){
				cout << str[i] << " "; 
			} 
			cout << endl; 
		} 
	} 
	return 0;
} 
