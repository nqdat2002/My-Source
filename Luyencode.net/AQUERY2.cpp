#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<pair<int, int> > a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i].first >> a[i].second;
    long long k;
    cin >> k;
    sort(a.begin(), a.end());
    long long sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += a[i].second;
        if (sum >= k) {
            cout << a[i].first;
            break;
        }
    }
    return 0;
}
