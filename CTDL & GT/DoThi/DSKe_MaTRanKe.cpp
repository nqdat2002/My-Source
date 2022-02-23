#include <bits/stdc++.h>
using namespace std;

int mat[1005][1005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1)
                cout << j + 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}