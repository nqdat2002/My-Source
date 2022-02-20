#include <bits/stdc++.h>
using namespace std;

int n, A[200], B[200] = {0}, mat[100][100];
int X[200] = {0}, N[200] = {0}, res = -999999;
void checkMax() {
    int sum = 0;
    for (int i = 1; i <= 8; i++)
        sum += mat[i][A[i]];
    if (sum > res)
        res = sum;
}

void Try(int i) {
    int j;
    for (j = 1; j <= 8; j++) {
        if (!B[j] && !X[i - j + 8] && !N[i + j - 1]) {
            A[i] = j;
            B[j] = 1;
            X[i - j + 8] = 1;
            N[i + j - 1] = 1;
            if (i == 8)
                checkMax();
            else Try(i + 1);
            B[j] = 0;
            X[i - j + 8] = 0;
            N[i + j - 1] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        res = -999999;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> mat[i][j];
        Try(1);
        cout << res << endl;
    }
    return 0;
}
