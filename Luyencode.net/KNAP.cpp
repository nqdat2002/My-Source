#include <iostream>
using namespace std;
int f[5005][5005];
int a[5005],b[5005];
int n,m;
int main(){
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
        cin>>a[i]>>b[i];
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (j >= a[i]) f[i][j] = max(f[i-1][j-a[i]] + b[i], f[i-1][j]);
                else f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][m];
    return 0;
}
