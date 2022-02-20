#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100005;
const int vc = 1000000007;
int t, i, n, a[Maxn];
int ch1() {
    int kq = 0;
    bool kt = true;
    for(i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            kt = false;
            kq += a[i];
        }
    }
    if (kt)
        kq = *max_element(a,a+n);
    return kq;
}
int ch2() {
    int tong = 0, kq = -vc;
    for(i = 0; i < n; ++i) {
        tong = tong + a[i];
        kq = max(tong, kq);
        tong = max(tong, 0);
    }
    return kq;
}
int main() {
    cin >> t;
    while (t--){
        cin >> n;
        for(i = 0; i < n; ++i)
            cin >> a[i];
        cout << ch1() << " " << ch2() << endl;
    }
    return 0;
}
