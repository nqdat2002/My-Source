#include <bits/stdc++.h>
using namespace std;
int n, a[20], m[10][10];
bool X[20], N[20], Y[20];
int res;

void update() {
    int sum = 0;
    for (int i = 1; i <= 8; i ++)
        sum += m[i][a[i]];
    res = max(res, sum);
}
void Try(int i) {
    for (int j = 1; j <= 8; j ++) {
        if (!Y[j] && !X[i - j + 8] && !N[i + j - 1]) {
            a[i] = j;
            Y[j] = true;
            X[i - j + 8] = true;
            N[i + j - 1] = true;
            if (i == 8) update();
            else Try(i + 1);
            Y[j] = false;
            X[i - j + 8] = false;
            N[i + j - 1] = false;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        res = -1e7;
        for(int i = 1; i <= 8; i ++) 
			for(int j = 1; j <= 8; j ++) cin >> m[i][j];
        memset(X, false, sizeof(X));
        memset(Y, false, sizeof(Y));
        memset(N, false, sizeof(N));
        Try(1);
        cout << res << endl;
    }
    return 0;
}
