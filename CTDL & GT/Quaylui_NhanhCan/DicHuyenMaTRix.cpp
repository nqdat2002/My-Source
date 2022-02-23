#include <bits/stdc++.h>
using namespace std;

int mat[101][101], m, n, res;
// k: buoc di

void dequy(int i, int j, int k) {
    if (i == m - 1 && j == n - 1) {
        res++;
        return;
    }

    if (i + 1 < m && mat[i+1][j] == 1) {
        dequy(i+1, j, k+1);
    }

    if (j + 1 < n && mat[i][j+1] == 1) {
        dequy(i, j+1, k+1);
    }
}

int main() {
    int test_count;
    cin >> test_count;
    while (test_count--) {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                mat[i][j] = 1;

        res = 0;
        dequy(0, 0, 0);
        cout << res << endl;
    }
    return 0;
}
