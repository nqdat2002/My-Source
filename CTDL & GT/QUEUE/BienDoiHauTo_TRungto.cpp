#include <bits/stdc++.h>
using namespace std;

bool isOperand(char x) {
    return (tolower(x) >= 'a' && tolower(x) <= 'z');
}

string hauto_trungto(string str) {
    stack<string> st;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isOperand(str[i])) {
            string op(1, str[i]);
            st.push(op);
        }
        else {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            st.push("(" + op2 + str[i] + op1 + ")");
        }
    }

    return st.top();
}

int main() {
    int t;
    string str;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> str;
        cout << hauto_trungto(str) << endl;
    }
    return 0;
}
