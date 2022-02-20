#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int Solve(int n) {
    set <int> s;
    int i;
    queue<pair<int, int> > q;
    q.push({n, 0});
    s.insert(n);
    while (!q.empty()) {
        pair <int, int> t = q.front(); q.pop();
        if (t.f == 1)
            return t.s;
        if (t.f - 1 == 1)
            return t.s + 1;
        if (s.find(t.f - 1) == s.end()) {
            q.push({t.f - 1, t.s + 1});
            s.insert(t.f - 1);
        }
        for (i = 2; i * i <= (t.f); i++) {
            if (t.first % i == 0) {
                if (s.find(t.f / i) == s.end()) {
                    q.push({t.f / i, t.s + 1});
                    s.insert(t.f / i);
                }
            }
        }
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}