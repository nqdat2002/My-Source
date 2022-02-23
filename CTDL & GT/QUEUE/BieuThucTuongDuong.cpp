#include <bits/stdc++.h>
using namespace std;

char* result(string str) {
    int len = str.length();

    char* res = new char(len);
    int idx = 0, i = 0;

    stack <int> s;
    s.push(0);

    while (i < len) {
        if (str[i] == '+') {

            // Neu top la 1, dao nguoc dau
            if (s.top() == 1)
                res[idx++] = '-';

            // Neu top la 0, them vao dau tuong tu
            if (s.top() == 0)
                res[idx++] = '+';
        }

        else if (str[i] == '-') {
            if (s.top() == 1)
                res[idx++] = '+';
            
            else if (s.top() == 0)
                res[idx++] = '-';
        }

        else if (str[i] == '(' && i >= 0) {
            if (str[i - 1] == '-') {
                int x = (s.top() == 1) ? 0 : 1;
                s.push(x);
            }

            else if (str[i - 1] == '+')
                s.push(s.top());
        }

        else if (str[i] == ')')
            s.pop();

        else
            res[idx++] = str[i];

        i++;
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
        cout << result(str) << endl;
    }
    return 0;
}
