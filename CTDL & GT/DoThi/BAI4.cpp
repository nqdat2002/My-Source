#include <bits/stdc++.h>
using namespace std;

int mat[1005][1005] = { 0 };

void tach(string s, int row) {
    int n = s.size(), flag = 0, col = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            if (!flag)
                flag = 1;
            col = col * 10 + (s[i] - 48);
        }

        else if (flag == 1) {
            flag = 0;
            mat[row][col] = 1;
            mat[col][row] = 1;
            col = 0;
        }

        if (i == n - 1 && col != 0) {
            mat[row][col] = 1;
            mat[col][row] = 1;
        }
    }
}

int main() {
    string s;
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        s = " ";
        getline(cin, s);
        tach(s, i);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}