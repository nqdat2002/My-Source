#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> pa;

int x[] = {0, 0, 1, -1};
int y[] = {1, -1, 0, 0};

int main() {
    int res = 0;
    int n, m;
    cin >> n >> m;

    queue <pa> q1;
    queue <int> q2;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) {
                q1.push(pa(i, j));
                q2.push(0);
            }
        }
    }

    while (q1.size()) {
        pa top = q1.front();
        q1.pop();
        int day = q2.front();
        res = max(res, day);
        q2.pop();

        for (int i = 0; i <= 3; i++) {
            int x1 = top.first + x[i];
            int y1 = top.second + y[i];
            if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 1) {
                q1.push(pa(x1, y1));
                q2.push(day + 1);
                a[x1][y1] = 2;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    cout << res << endl;
    return 0;
}