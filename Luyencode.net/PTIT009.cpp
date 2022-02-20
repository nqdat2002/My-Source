#include <bits/stdc++.h>
using namespace std;
int finds(string x, string y) {
    string t = y + y;
    if (t.find(x) == string::npos)
        return -1;
    else {
        return t.find(x);
    }
}
int main() {
    int n;
    cin >> n;
    string a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int count[n+1];
    for (int i = 0; i <= n; i++)
        count[i] = 0;
    bool l = true;
    int i = 1;
    while (i <= n && l) {
        for (int j = 1; j <= n; j++) {
            if (finds(a[i], a[j]) == -1) {
                cout << -1;
                l = false;
            } else
                count[i] += finds(a[i], a[j]);
        }
        i++;
    }
    if (l) {
        int m = count[1];
        for (int k = 1; k <= n; k++)
            if (m > count[k])
                m = count[k];
        cout << m;
    }

    return 0;
}