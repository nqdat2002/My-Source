#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int nmax = 1000001;
using namespace std;
long long S[nmax];

int main() {
    long long n, a[nmax], res = 1000000001, s1, s2;
    cin >> n;
    S[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        S[i] = S[i-1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        s1 = S[n] - S[i];
        s2 = S[i];
        if (s1 < s2)
            swap(s1, s2);
        res = min(res, s1 - s2);
    }
    cout << res << endl;
    return 0;
}
