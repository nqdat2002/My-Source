#include <bits/stdc++.h>
using namespace std;

void result(string str) {
    string res;
    stack <int> st;

    for (int i = 0; i <= str.length(); i++) {
        st.push(i + 1);

        if (i == str.length() || str[i] == 'I') {
            while (!st.empty()) {
                res += to_string(st.top());
                st.pop();
            }
        }
    }
    
    cout << res << endl;
}

int main() {
    int t;
    string str;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> str;
        result(str);
    }
    return 0;
}
