#include<bits/stdc++.h>
#define N 202
using namespace std;
int n,m;
int a[N][N];
int get(int i, int j, int u, int v)
    {
        return a[u][v]-a[i-1][v]-a[u][j-1]+a[i-1][j-1];
    }
int main()
{
    cin>>n>>m;
    for (int i=1; i <= n; i++)
        for (int j=1; j <= m; j++){
            cin>>a[i][j];
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    for (int len=min(n,m)-1; len >= 0; len--)
        for (int i=1; i <= n-len; i++)
            for (int j=1; j <= m-len; j++){
                int rs=len+1;
                bool k1=(get(i,j,i+len,j) == rs);
                bool k2=(get(i,j,i,j+len) == rs);
                bool k3=(get(i+len,j,i+len,j+len) == rs);
                bool k4=(get(i,j+len,i+len,j+len) == rs);
                if (k1&&k2&&k3&&k4){
                    cout<<rs*rs;
                    return 0;
                }
            }
    cout<<0;
    return 0;
}
