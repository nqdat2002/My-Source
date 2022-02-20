#include <bits/stdc++.h>
using namespace std;
int main() {
    long long d, a, b, c1 = 0, c2 = 0;
    cin >> d >> a >> b;
    while (a % d != 0) {
        a++;
    }
    for (long long i = a ; i <= b; i += d) {
        long long k = i;
        while (k % 2 == 0) {
            k /= 2;
            c1++;
        }
        while (k % 5 == 0) {
            k /= 5;
            c2++;
        }
    }
    cout << min(c1, c2);
}
