#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        int count=2;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                count += 2;
        if (	(int)sqrt(n) * (int)sqrt(n) == n)
            count--;
        cout << count << "\n";
    }
    return 0;
}
