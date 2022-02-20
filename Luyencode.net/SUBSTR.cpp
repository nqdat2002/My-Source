#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int lcs(string &a, string &b) {
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));

    for (int i=1; i<=m; i++) for (int j=1; j<=n; j++) {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    return f[m][n];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string a; cin >> a;
    string b; cin >> b;
    cout << lcs(a, b);
}
