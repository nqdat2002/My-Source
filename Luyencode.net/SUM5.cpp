#include <bits/stdc++.h>
#define MAXIMON 100001
#define ld long double
#define ll long long
#define FORUP(i, star, end) for (ll i = star; i <= end; ++i)
ld s[MAXIMON];
ll n, t;
using namespace std;
int main() {
FORUP(i, 1, MAXIMON) {
s[i] = (1 / (i * 1.0)) + s[i - 1];
}
cin >> t;
FORUP(i, 1, t) {
cin >> n;
cout << fixed << setprecision(5) << s[n] << endl;
}
}