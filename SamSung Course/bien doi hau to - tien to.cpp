#include <bits/stdc++.h>
using namespace std;
bool isOperator(char x) {
    switch (x) {
    case '+' :
    case '-' :
    case '/' :
    case '*' :
        return true;
    }
    return false;
}
string hauto_tiento(string str) {
    int n = str.length(), i;
    stack<string> st;
    for (i = 0; i < n; i++) {
        if (isOperator(str[i])) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string tmp = str[i] + op2 + op1;
            st.push(tmp);
        }
        else 
            st.push(string(1, str[i]));
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
        cout << hauto_tiento(str) << endl;
    }
    return 0;
}