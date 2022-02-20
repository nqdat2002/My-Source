#include <bits/stdc++.h>
#define N 1000
using namespace std;
int main() {
    long long int n;
    cin >> n;
    int count, countPrime = 0;
    bool check;
    long long int t = n;
    for (int i = 2; i <= n; i++) {
        count = 0;
        check = false;
        if (n < i)
            break;
        while (n % i == 0) {
            if (!check)
                countPrime++;
            n = n / i;
            count++;
            check = true;
        }
    }
    cout << countPrime << '\n';
    for (int i = 2; i <= t; i++) {
        count = 0;
        check = false;
        if (t < i)
            break;
        while (t % i == 0) {
            t = t / i;
            count++;
            check = true;
        }
        if (check)
            cout << i << " " << count << '\n';
    }
    return 0;
}