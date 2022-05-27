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
// Date: 03/03/22 22:36
// Program: Xau con doi xung dain nhat
// -------------------  Your code STARTS here !!!---------------------------

int n;
int f[1005][1005] = {0};
string s;
int dp(string s){
    int n = s.length(), i, j, k, res = 1;
    for (i = 0; i < n; i++)
        f[i][i] = 1;
    for (k = 1; k <= n - 1; k++) {
        for (i = 0; i <= n - k - 1; i++) {
            j = i + k;
            if (s[i] == s[j] && k != 1)
                f[i][j] = f[i + 1][j - 1];
            else if (s[i] == s[j] && k == 1)
                f[i][j] = 1;
            else 
                f[i][j] = 0;
            
            if (f[i][j] == 1)
                res = max(res, j - i + 1);
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        cin >> s;
        cout << dp(s) << endl;
    }
    return 0;
}
