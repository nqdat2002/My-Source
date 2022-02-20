#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, a) for (int i = 0; i < (a); ++i)
#define DEBUG(x) { cerr << #x << '=' << x << endl; }
#define Arr(a, l, r) { cerr << #a << " = {"; FOR(_, l, r) cerr << ' ' << a[_]; cerr << "}\n"; }
#define N 3030
#define pp pair<int, int>
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define taskname ""
#define bit(S, i) (((S) >> (i)) & 1)
using namespace std;
const long long MOD = 1e9 + 7;
long long dp[N][N];
void Add(long long &a, long long b) { a += b; if (a >= MOD) a -= MOD; }
 
void Solve() {
    int m, n;
    cin >> m >> n;
    FOR(i, 0, m) dp[i][0] = 1;
    FOR(i, 0, n) dp[0][i] = 1;
    FOR(i, 1, m) FOR(j, 1, n) {
        // Put no student at row i
        Add(dp[i][j], dp[i - 1][j]);
        // Put just a student at row i
        Add(dp[i][j], dp[i - 1][j - 1] * 4ll * j % MOD);
        // Put a student at row i and another student at the same column
        if (i > 1) Add(dp[i][j], dp[i - 2][j - 1] * (i - 1) * j % MOD);
        // Put two student at row i
        if (j > 1) Add(dp[i][j], dp[i - 1][j - 2] * ((j - 1) * j / 2) % MOD); 
    }
    cout << (dp[m][n] - 1 + MOD) % MOD;
}
int main() {
    IO;
    Solve();
  //  #ifdef NERO
}
