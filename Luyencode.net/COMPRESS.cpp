#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    string ans;

    for(int len = 1; len <= n; ++len) {
        if (n % len != 0) continue;
        bool ok = true;
        for(int i = 0; i < n; ++i) {
            if (s[i] != s[i%len]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            ans = to_string(n/len) + s.substr(0, len);
            break;
        }
    }
    cout << ans;
    return 0;
}
