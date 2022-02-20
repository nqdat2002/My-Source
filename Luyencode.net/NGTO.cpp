#include <bits/stdc++.h>
using namespace std;
const int nmax=300001;
struct so {
    int a, b;
};
bool so_nto(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
    int n, sum = 0;
    cin >> n;
    so a[nmax];
    for (int i = 2; i < n / 2; i++) {
        if (so_nto(i) && so_nto(n - i)) {
            sum += 1;
            a[sum].a = i;
            a[sum].b = n - i;
        }
    }
    cout << sum << '\n';
    for (int i = 1; i <= sum; i++) 
		cout << a[i].a << ' ' << a[i].b << '\n';
}
