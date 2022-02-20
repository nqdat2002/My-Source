#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

long long a, b, x, y, n;
void init() {
    cin >> a >> b >> x >> y >> n;
}
void process() {
    if ((a - x + b - y <= n)) {
        cout << x * y << endl;
        return;
    }
    long long a1 = max(a - n, x);
    long long b1 = max(b - n, y);

    if (a1 > b1) {
        cout << b1 * (a - n + (b - b1));
    }
    else cout << a1 * (b - n + (a - a1));
    cout << endl;
}
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
