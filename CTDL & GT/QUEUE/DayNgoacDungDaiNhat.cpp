#include <bits/stdc++.h>
using namespace std;

int result(string str) {
    int n = str.length();

    stack <int> s;
    s.push(-1);

    int res = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '(')
            s.push(i);

        else {
            s.pop();

            if (!s.empty()) {
                res = max(res, i - s.top());
            }

            else 
                s.push(i);
        }
    }

    return res;
}

int main() {
    int t;
    string str;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> str;
        cout << result(str) << '\n';
    }
    return 0;
}
