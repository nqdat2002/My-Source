#include <bits/stdc++.h>
#define MAXN 1000006
using namespace std;
int n, q, ans;
string s[MAXN];
bool DEL[MAXN], DEL2[MAXN];
int main() {
    cin >> n >> q;
    ans = n;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < q; i++) {
        string c;
        cin >> c;
        char tmp = c[0];
        if (!DEL2[tmp])
            for (int j = 0; j < n; j++) {
                if (!DEL[j] && s[j].find(tmp) != string::npos) {
                    DEL[j] = true;
                    ans--;
                }
                DEL2[tmp] = true;
            }
        cout << ans << endl;
    }
}
