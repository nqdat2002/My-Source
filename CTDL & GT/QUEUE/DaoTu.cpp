#include <bits/stdc++.h>
using namespace std;

void result(string str) {
    int n = str.length();
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (str[i] == ' ') {
            for (int pos = i - 1; pos >= j; pos--) {
                cout << str[pos];
            }
            cout << str[i];
            j = i + 1;
        }

        if (i == n - 1) {
            for (int pos = i; pos > j - 1; pos--) {
                cout << str[pos];
            }
        }
    }

    cout << '\n';
}

int main() {
    int t;
    string str;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, str);
        result(str);
    }
    return 0;
}
