#include <bits/stdc++.h>
using namespace std;

int mat[105][105][105];

int tinh(string s1, string s2, string s3, int m, int n, int p) {
    int i, j, k;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            for (k = 1; k <= p; k++)
                if (s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1])
                    mat[i][j][k] = mat[i-1][j-1][k-1] + 1;
                else
                    mat[i][j][k] = max(max(mat[i-1][j][k], mat[i][j-1][k]), mat[i][j][k-1]);
    
    return mat[m][n][p];
}

int main() {
    int test;
    string s1, s2, s3;
    int n, m, p;
    cin >> test;
    while (test--) {
        cin >> n >> m >> p;
        cin >> s1 >> s2 >> s3;
        cout << tinh(s1, s2, s3, n, m, p) << endl;
    }
    return 0;
}
