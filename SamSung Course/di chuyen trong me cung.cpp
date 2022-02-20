#include <iostream>
using namespace std;
int a[20][20], b[20][20] = {0}, r[101] = {};
int n, temp, check;
void output() {
    for (int i = 1; i <= 100; i++) {
        if (r[i] == 1) cout << "D";
        if (r[i] == 2) cout << "L";
        if (r[i] == 3) cout << "R";
        if (r[i] == 4) cout << "U";
    }
    cout << " ";
}
void backtrack(int x, int y) {
    if (x < n && a[x + 1][y] == 1 && b[x + 1][y] == 0) {
        r[temp++] = 1;
        b[x + 1][y] = 1;
        backtrack(x + 1, y);
        r[--temp] = 0;
        b[x + 1][y] = 0;
    }
    if (y > 1 && a[x][y - 1] == 1 && b[x][y - 1] == 0) {
        r[temp++] = 2;
        b[x][y - 1] = 1;
        backtrack(x, y - 1);
        r[--temp] = 0;
        b[x][y - 1] = 0;
    }
    if (y < n && a[x][y + 1] == 1 && b[x][y + 1] == 0) {
        r[temp++] = 3;
        b[x][y + 1] = 1;
        backtrack(x, y + 1);
        r[--temp] = 0;
        b[x][y + 1] = 0;
    }
    if (x > 1 && a[x - 1][y] == 1 && b[x - 1][y] == 0) {
        r[temp++] = 4;
        b[x - 1][y] = 1;
        backtrack(x - 1, y);
        r[--temp] = 0;
        b[x - 1][y] = 0;
    }
    if (x == n && y == n) {
        output();
        check++;
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        b[1][1] = 1;
        temp = 1, check = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        
        if (a[1][1] == 0 || a[n][n] == 0);
        else 
            backtrack(1, 1);
        if (!check) cout << -1;
    }
    return 0;
}
