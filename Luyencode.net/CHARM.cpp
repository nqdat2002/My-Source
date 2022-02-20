#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[10001], w[100001];
int f[5001][15001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i=1; i<=n; i++)
        cin>>a[i]>>w[i];
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            if (a[i]<=j)
                f[i][j]=max(f[i-1][j], f[i-1][j-a[i]]+w[i]);
            else
                f[i][j]=f[i-1][j];
        }
    }
    cout<<f[n][m];
    return 0;
}
