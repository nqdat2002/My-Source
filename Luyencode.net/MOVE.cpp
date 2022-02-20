#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int f[502][502];
int n,m;
void solve(int i,int j,int val){

    if (i == 1 && j == 1){
        f[i][j] = val;
        return;
    }
    if (j == 1){
        f[i][j] = f[i-1][j] + val;
        return;
    }
    if (i == 1){
        f[i][j] = f[i][j-1] + val;
        return;
    }
    f[i][j] = max(f[i-1][j],f[i][j-1]) + val;
}
int main(){
    cin >> n >> m;
    int x;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> x;
            solve(i,j,x);
        }
    }
    cout << f[n][m];
    return 0;
}
