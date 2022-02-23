#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int priority(char c) {
    if (c == '+' || c == '-')
        return 1;

    if (c == '*' || c == '/' || c == '%')
        return 2;

    if (c == '^')
        return 3;

    return -1;
}

void trungto_hauto(string str) {
    int n = str.length(), i;
    stack<char> st;
    string res = "";

    for (i = 0; i < n; i++) {
        if (str[i] == '(')
            st.push(str[i]);
        
        else if (tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
            res += str[i];

        else if (str[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                char c = st.top();
                st.pop();
                res += c;
            }

            if (st.top() == '(')
                st.pop();
        }

        else {
            while (!st.empty() && priority(str[i]) <= priority(st.top())) {
                char c = st.top();
                st.pop();
                res += c;
            }
            st.push(str[i]);
        }
    }

    while (!st.empty() && st.top() != '(') {
        char c = st.top();
        st.pop();
        res += c;
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
        trungto_hauto(str);
    }
    return 0;
}
