#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pa;

int a[1005][1005], m, n;
bool v[1005][1005];

void result() {
    memset(v, 0, sizeof(v));
    queue <pa> q;
    q.push(pa(0, 0));
    int res = 0;

    while (q.size() != 0) {
        int x = q.size();
        while (x--) {
            pa y = q.front();
            int i = y.first;
            int j = y.second;
            q.pop();

            if (v[i][j])
                continue;

            if (i == m - 1 && j == n - 1) {
                cout << res << endl;
                return;
            }

            v[i][j] = 1;

            if (i + a[i][j] < m)
                q.push(pa(i + a[i][j], j)) ;
            
            if (j + a[i][j] < n)
                q.push(pa(i, j + a[i][j]));
        }
        res++;
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        result();
    }
    return 0;
}
