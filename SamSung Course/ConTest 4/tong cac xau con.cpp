#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
ll Solve() {
    ll tmp = (int)(str[0] - '0');
    ll res = tmp;
    for (int i = 1; i < str.size(); i ++) {
        tmp = (i + 1) * (int)(str[i] - '0') + 10 * tmp;
        res += tmp;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> str;
        cout << Solve() << endl;
    }
    return 0;
}
