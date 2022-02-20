#include <bits/stdc++.h>
using namespace std;
int priority(char x) {
    switch (x) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}
string INFIX2RPN(string INFIX) {
    string RPN;
    stack<char> st;
    for (char token : INFIX) switch (token) {
        case '(':
            st.push(token);
            break;
        case ')':
            while (1) {
                char x = st.top();
                st.pop();
                if (x == '(')
                    break;
                RPN.push_back(x);
            }
            break;
        case '^':
        case '*':
        case '/':
        case '+':
        case '-':
        while (st.size() && priority(token) <= priority(st.top())) {
            RPN.push_back(st.top());
            st.pop();
        }
        st.push(token);
        break;
        default:
            RPN.push_back(token);
            break;
    }
    while (!st.empty()) {
        RPN.push_back(st.top());
        st.pop();
    }
    return RPN;
}
int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        cout << INFIX2RPN(s) << '\n';
    }
    return 0;
}