#include <bits/stdc++.h>
using namespace std;

#define MAX 16

int n, P[MAX], B[MAX], C[MAX][MAX], dem = 0;
int A[MAX], can, cmin, fopt;

int min_matrix() {
    int min = INT_MAX, i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i != j && min > C[i][j])
                min = C[i][j];
        }
    }
    return min;
}

void init() {
    cin >> n;
    for (int i1 = 1; i1 <= n; i1++)
        for (int i2 = 1; i2 <= n; i2++)
            cin >> C[i1][i2];

    int i;
    cmin = min_matrix();
    fopt = INT_MAX;
    can = 0;
    A[1] = 1;
    for (i = 1; i <= n; i++)
        B[i] = 1;
}

void updateRecord() {
    int sum;
    sum = can + C[A[n]][A[1]];
    if (sum < fopt)
        fopt = sum;
}

void Try(int i) {
    int j;
    for (j = 2; j <= n; j++) {
        if (B[j]) {
            A[i] = j; B[j] = 0;
            can += C[A[i-1]][A[i]];
            if (i == n)
                updateRecord();
            else if (can + (n - i + 1) * cmin < fopt)
            {
                dem++;
                Try(i+1);
            }
            B[j] = 1;
            can -= C[A[i-1]][A[i]];
        }
    }
}

int main() {
    init();
    Try(2);
    cout << fopt;
    return 0;
}
