#include <bits/stdc++.h>
using namespace std;
#define nmax 2000006
int n, m, z[nmax];

void buildz(string s) {
    int n = s.size();
    z[0] = n;
    int l = 0;
    int r = 0;
    for (int i = 1; i < n; i++) {
        if (i > r) {
            l = r = i;
            while (r < n && s[r] == s[r - l]) r++;
            z[i] = r - l;
            r--;
        } else {
            int k = i - l;
            if (z[k] < r - i + 1)
                z[i] = z[k];
            else {
                l = i;
                while (r < n && s[r] == s[r - l]) r++;
                z[i] = r - l;
                r--;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> t;
    cin >> m;
    reverse(t.begin(), t.end());
    buildz(t);
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        cout << z[t.size() - x] << ' ';
    }
}