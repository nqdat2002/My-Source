#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>
#define ll long long
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

ll a[3];
void init() {
    cin >> a[0] >> a[1] >> a[2];
}
void process() {
    sort(a, a + 3);
    ll ans = 0;
    if (a[2] >= (a[0] + a[1]) * 2) ans = a[0] + a[1];
    else {
        ans = a[0] + a[1] + a[2];
        ans /= 3;
    }

    cout << ans << endl;

}
int main() {
    faster;
    int t = 1;
//    cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
