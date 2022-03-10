#include <bits/stdc++.h>
using namespace std;

bool result(string str) {
    int n = str.length();
    stack <char> s;

    for (int i=0;i<str.length();i++) {
        if (str[i] == ')') {
            char top = s.top();
            s.pop();
            int count = 0;
            while (top != '(') {
                count++;
                top = s.top();
                s.pop();
            }
            if (count <= 1)
                return true;
        }
        else s.push(str[i]);
    }
    return false;
}
int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
    	string str;
        getline(cin, str);
        if (result(str))
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
    return 0;
}
