#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    stack<int> res;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            res.push(i + 1);
        }
        else if (s[i] == ')') {
            cout << mo.top() << " " << i + 1 << endl;
            mo.pop();

        }
    }



}