#include <bits/stdc++.h>
using namespace std;
int mat[11][11], n;
char ch[100];
bool printed = false;
void in(int k) {
    for (int i = 0; i < k; i++)
        cout << ch[i];
    cout << " ";
    printed = true;
}
void Try(int i, int j, int k) {
    if (i == n - 1 && j == n - 1) {
        in(k);
        return;
    }

    if (i + 1 < n && mat[i+1][j] == 1) {
        ch[k] = 'D';
        Try(i+1, j, k+1);
    }

    if (j + 1 < n && mat[i][j+1] == 1) {
        ch[k] = 'R';
        Try(i, j+1, k+1);
    }
}

int main() {
    int test_count;
    cin >> test_count;
    while (test_count--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        printed = false;

        if (mat[0][0] != 1)
            cout << "-1";
        else {
            Try(0, 0, 0);
            if (!printed)
                cout << "-1";
        }
        cout << endl;
    }
    return 0;
}