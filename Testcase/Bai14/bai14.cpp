#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("9.inp", "r", stdin);
	freopen("9.out", "w", stdout);
    string str;
    cin >> str;
    stack<int> res;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            res.push(i + 1);
        }
        else if (str[i] == ')') {
            cout << res.top() << " " << i + 1 << endl;
            res.pop();

        }
    }
}
