#include <bits/stdc++.h>
using namespace std;
void solution(int d, int s) {
    if (s == 0) {
        (d == 1)? cout << 0 << endl : cout << "-1" << endl;
        return;
    }
    if (s > 9 * d) {
        cout << "-1" << endl;
        return;
    }
    int res[d];
    s -= 1;
    for (int i = d - 1; i > 0; i--) {
        if (s > 9) {
            res[i] = 9;
            s -= 9;
        }
        else {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    for (int i = 0; i < d; i++)
        cout << res[i];
    
    cout << endl;
}
int main() {
    int test, s, d;
    cin >> test;
    while (test--) {
        cin >> s >> d;
        solution(d, s);
    }
    return 0;
}
