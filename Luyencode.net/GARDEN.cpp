#include <bits/stdc++.h>

using namespace std;

long long Solve(vector<int>& x) {
    sort(x.begin(), x.end());
    long long ans = 0;
    int pivot = x[x.size() / 2];
    for (int a : x) ans += abs(pivot - a);
    //for (int a : x) cerr << a << ' ';cerr << ans << '\n';
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    // Row
    vector<int> temp(n);
    copy(y.begin(), y.end(), temp.begin());
    for (int i = 0; i < n; ++i) y[i] -= i; 
    long long ans = Solve(x) + Solve(y);
    // Column
    swap(temp, y);
    //for (int a : x) cerr << a << ' '; cerr << '\n';
    for (int i = 0; i < n; ++i) x[i] -= i;
    ans = min(ans, Solve(x) + Solve(y));
    cout << ans << '\n';
    
}
