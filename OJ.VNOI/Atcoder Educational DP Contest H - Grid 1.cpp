#include<bits/stdc++.h>
using namespace std;
int visited[1005][1005];
long long dp[1005][1005] = {};
int n, m;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout .tie(NULL);
  
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        string s; cin >> s;
        s = ' ' + s;
        for(int j = 1; j <= m; ++j) {
            if(s[j] == '.') visited[i][j] = 1;
            else visited[i][j] = 0;
        }
    }
    dp[1][1] = 1;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(!visited[i][j]) dp[i][j] = 0;
            else {
                if(i > 1) dp[i][j] += dp[i - 1][j];
                if(j > 1) dp[i][j] += dp[i][j - 1];
                dp[i][j] %= 1000000007;
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
