#include <bits/stdc++.h>
using namespace std;

int n, A[20], B[20] = {0}, mat[10][10];
int X[20] = {0}, N[20] = {0}, res = -999999;

void in() {
    for (int i = 1; i <= 8; i++)
        cout << A[i] << " ";
    cout << endl;
}

void printMatrix() {
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void checkMax() {
    int sum = 0;
    // for (int i = 1; i <= 8; i++)
    //     cout << mat[i][A[i]] << " ";
    // cout << endl;
    for (int i = 1; i <= 8; i++)
        sum += mat[i][A[i]];
    if (sum > res)
        res = sum;
    // cout << sum << endl;
}

void Try(int i) {
    int j;
    for (j = 1; j <= 8; j++) {
        if (!B[j] && !X[i-j+8] && !N[i+j-1]) {
            // !B[j] : chua duoc chon
            A[i] = j;
            B[j] = 1;
            X[i-j+8] = 1;
            N[i+j-1] = 1;
            if (i == 8)
                checkMax();
                // in();
            else Try(i+1);
            B[j] = 0;
            X[i-j+8] = 0;
            N[i+j-1] = 0;
        }
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        res = -999999;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> mat[i][j];

        // printMatrix();
        
        Try(1);
        cout << res << endl;
    }
    return 0;
}
