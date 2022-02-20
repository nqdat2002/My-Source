#include <bits/stdc++.h>
using namespace std;
const int Mx = 100001;
const int vc = 1000000007;
int n;
pair<int, int> a[2*Mx];
int main() {
    cin >> n;
    for(int i = 0; i < 2*n; ++i) {
        cin >> a[i].first;
        if (i < n)
            a[i].second = 0;
        else
            a[i].second = 1;
    }
    sort(a, a + 2*n);
    int res = vc;
    for(int i = 1; i < 2*n; ++i)
        if (a[i].second + a[i-1].second == 1)
            res = min(res, a[i].first - a[i-1].first);
    cout << res;
    return 0;
}