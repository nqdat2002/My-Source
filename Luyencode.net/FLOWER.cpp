#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
int a[1001][1001],dp[1001][1001];
int n,m;
using namespace std;
int main(){
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 2; i <= m; i++)
        dp[0][i] = -1;
    for(int i = 2; i <= n; i++)
        dp[i][0] = -1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(max(dp[i-1][j],dp[i][j-1]) < 0 || a[i][j] == -1){
                dp[i][j] = -1;
                continue;
            }
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]) + a[i][j];
        }
    }
    cout << dp[n][m];
    return 0;
}
