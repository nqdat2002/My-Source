#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int f[105][105];

int result() {
    for (int i = 0; i <= s1.size(); i++) {
        for (int j = 0; j <= s2.size(); j++) {
            if (!i)
                f[i][j] = j;
            if (!j)
                f[i][j] = i;

            if (i > 0 && j > 0) { 
                if (s1[i - 1] == s2[j - 1])
                    f[i][j] = f[i - 1][j - 1];
                else 
                    f[i][j] = min(min(f[i - 1][j], f[i][j - 1]),
                                    f[i - 1][j - 1]) + 1;
            }
        }
    }
    return f[s1.size()][s2.size()];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        cout << result() << endl;
    }
    return 0;
}
