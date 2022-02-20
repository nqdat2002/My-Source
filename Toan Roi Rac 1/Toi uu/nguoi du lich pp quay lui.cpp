#include <bits/stdc++.h>
using namespace std;
long ck[1000], n, c[25][25], s = 0, res = 1e7, cmin = 1e7;
long x[100], xres[100];
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> c[i][j];
            cmin = min(cmin, c[i][j]);
        }
    }
}
void Try(int i){
    if(s + cmin * (n - i + 1) >= res) return;
    for(int j = 1; j <= n; j ++){
        if(ck[j]){
            x[i] = j;
            ck[j] = 0;
            s += c[x[i - 1]][j];
            if(i == n){
                if(s + c[x[n]][x[1]] < res){
                    res = s + c[x[n]][x[1]];
                    for(int i = 1; i <= n; i ++)
                        xres[i] = x[i];
                }
            }
            else Try(i + 1);
            s -= c[x[i - 1]][j];
            ck[j] = 1;
        }
    }
}
int main(){
    memset(ck, 1, sizeof(ck));
    ck[1] = 0; x[1] = 1;
    inp();
    Try(2);
    cout << res << ".0" << endl;
    for(int i = 1; i <= n; i ++)
        cout << xres[i] << " ";
    cout << 1 << endl;
    return 0;
}