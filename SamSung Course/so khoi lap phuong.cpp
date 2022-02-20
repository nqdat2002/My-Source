#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
string C(ll n) {
    string res = "";
    while (n > 0) {
        res = char(n % 10 + '0') + res;
        n /= 10;
    }
    return res;
}
vector<string> Gan(ll n) {
    vector<string> res;
    for (ll i = 1; i * i * i <= n; i ++) {
        ll tmp = i * i * i;
        res.push_back(C(tmp));
    }
    return res;
}
string Solve(ll n) {
    vector<string> str1 = Gan(n);
    string str2 = C(n);
    for (int i = str1.size() - 1; i >= 0; i--) {
        string ans = str1[i];
        int k = 0;
        for (int j = 0; j < str2.size(); j ++) {
            if (str2[j] == ans[k])
                k ++;
        }
        if (k == ans.size())
            return ans;
    }
    return "-1";
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}
