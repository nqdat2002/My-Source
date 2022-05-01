#include <bits/stdc++.h>
using namespace std;
string s;
int z[100001], f[100001];
void buildZ() {
    int n = s.length();
    z[0] = n;
    int L = 0, R = 0;
    for (int i = 1; i < n; i++) {
        if (R < i) {
            L = R = i;
            while (R < n && s[R] == s[R - L]) R++;
            z[i] = R-- - L;
        } else {
            int k = i - L;
            if (z[k] < R - i + 1)
                z[i] = z[k];
            else {
                L = i;
                while (R < n && s[R] == s[R - L]) R++;
                z[i] = R-- - L;
            }
        }
    }
}
int main() {
    cin >> s;
    buildZ();
    memset(f, 0, sizeof f);
    for (int i = 0; i < s.length(); i++) f[z[i]]++;
    for (int i = 99999; i >= 0; i--) f[i] += f[i + 1];
    for (int i = 1; i <= s.length(); i++) cout << f[i] << ' ';
}
