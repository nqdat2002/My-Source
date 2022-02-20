#include <bits/stdc++.h>
using namespace std;

void TestCase() {
    long long x;
    cin >> x;
    long long y = cbrt(x); 
    string str = to_string(x);

    for (int i = y; i >= 1; --i) {
        long long z = pow(i, 3);
        string s = to_string(z);
        if (s.compare(str) == 1) {
            cout << s << endl;
            return;
        }
    }
    cout << "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        TestCase();
    }
    return 0;
}
