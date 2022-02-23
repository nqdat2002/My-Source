#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

void isTree(queue <int> ke[], int n) {
    queue <int> q;
    bool visited[MAX] = { false };
    q.push(1);
    visited[1] = true;
    int count = 1;
    while (!q.empty()) {
        int k = q.front(); q.pop();
        while (!ke[k].empty()) {
            int t = ke[k].front();
            ke[k].pop();
            if (!visited[t]) {
                q.push(t);
                visited[t] = true;
                count++;
            }
        }
    }

    if (count != n)
        cout << "NO\n";
    
    else cout << "YES\n";
}

int main() {
    int t, n, tmp1, tmp2;
    cin >> t;
    while (t--) {
        cin >> n;
        queue <int> ke[n + 5];
        for (int i = 1; i < n; i++) {
            cin >> tmp1 >> tmp2;
            ke[tmp1].push(tmp2);
            ke[tmp2].push(tmp1);
        }

        isTree(ke, n);
    }
    return 0;
}