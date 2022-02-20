#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin >> n;
    vector<int> a(n);
    for(i = 0; i < n; ++i)
        cin >> a[i];
    int kq = 0;
    for(i = 0; i < n; ++i) {
        vector<int> b = a;
        b.erase(b.begin() + i);

        int dodep = 0;
        for(j = 1; j < b.size(); ++j)
            dodep = max(dodep, b[j] - b[j-1]);
        kq = max(kq, dodep);
    }

    cout << kq;

    return 0;
}