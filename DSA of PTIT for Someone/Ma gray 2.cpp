#include <bits/stdc++.h>
using namespace std;
string Next(string s) {
    string res = "";
   	res += s[0];
    for (int i = 1; i < s.length(); i++)
        res += to_string((res[i - 1] - '0') ^ (s[i] - '0'));
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << Next(s) << endl;
    }
    return 0;
}
