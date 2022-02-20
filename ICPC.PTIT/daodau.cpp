#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


using namespace std;
int n, k, a[100005], dem = 0, mi;
void init() {
    dem = 0;
    mi = 100000000;
    cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        cin >> a[i];
        if (a[i] < 0) dem++;
        mi = min(mi, abs(a[i]));
    }
}
void process() {
    sort(a, a + n);
    long long ans = 0;
    if (k <= dem) {
        for (int i = 0; i < k; i++) ans += abs(a[i]);
        for (int i = k; i < n; i++) ans += a[i];
    }
    else {
        for (int i = 0; i < n; i += 1) ans += abs(a[i]);
        k -= dem;
        if (k % 2)
            ans -= 2*mi;
    }
    cout << ans << endl;
}
int main() {
    faster;
    int t=1;
 //   cin >> t;
    while (t--) {
        init();
        process();
    }
}
