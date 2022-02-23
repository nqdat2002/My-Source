#include <bits/stdc++.h>
using namespace std;

int n, m, x, y;

void result() {
    cin >> n >> m;
    priority_queue<int, vector <int>, greater<int> > q[n + 5];
    while (m--) {
        cin >> x >> y;
        q[x].push(y);
        q[y].push(x);
    }

    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        while (!q[i].empty()) {
            cout << q[i].top() << " ";
            q[i].pop();
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        result();
    }
    return 0;
}