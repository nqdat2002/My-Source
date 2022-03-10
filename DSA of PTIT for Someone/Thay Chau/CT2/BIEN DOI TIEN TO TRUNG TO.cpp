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

string tiento_trungto(string str) {
    stack<string> st;
    int n = str.size();

    for (int i = n - 1; i >= 0; i--) {
        if (isOperator(str[i])) {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            string tmp = "(" + op1 + str[i] + op2 + ")";
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
        cout << tiento_trungto(str) << endl;
    }
    return 0;
}
