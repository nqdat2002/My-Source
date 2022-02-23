#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> s;
    string str;
    int n, t;
    cin >> t;
    while (t--) {
        cin >> str;
        if (str.compare("PUSH") == 0) {
            cin >> n;
            s.push(n);
        }

        else if (str.compare("POP") == 0) {
            if (!s.empty()) {
                s.pop();
            }
        }

        else if (str.compare("PRINT") == 0) {
            if (!s.empty()) {
                cout << s.top() << endl;
            }
            
            else {
                cout << "NONE\n";
            }
        }
    }

    return 0;
}
