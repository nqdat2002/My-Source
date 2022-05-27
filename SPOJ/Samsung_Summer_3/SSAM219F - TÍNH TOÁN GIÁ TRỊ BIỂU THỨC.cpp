#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;

const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 18/03/22 22:13
// Program: Tinh toan gia tri bieu thuc trung to
// -------------------  Your code STARTS here !!!---------------------------

stack <ll> val;
stack <char> ops;

ll Calculate(ll a, ll b, char c) {
    if(c == '+') return a + b;
    if(c == '-') return a - b;
    if(c == '*') return a * b;
    return a / b;
}

int priority(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

ll Prefix(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (str[i] == '(')
            ops.push(str[i]);
        else if (isdigit(str[i])) {
            ll x = 0;
            while (i < n && isdigit(str[i])) {
                x = (x * 10) + (str[i] - '0');
                i++;
            }
            if (!isdigit(str[i])) i--;
            val.push(x);
        }
        else if (str[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                ll x1 = val.top(); val.pop();
                ll x2 = val.top(); val.pop();
                char y = ops.top(); ops.pop();
                val.push(Calculate(x2, x1, y));
            }
            if (!ops.empty())
                ops.pop();
        }
        else {
            while (!ops.empty() && priority(ops.top()) >= priority(str[i])) {
                ll x1 = val.top(); val.pop();
                ll x2 = val.top(); val.pop();
                char y = ops.top(); ops.pop();
                val.push(Calculate(x2, x1, y));
            }
            ops.push(str[i]);
        }
    }
    while (!ops.empty()) {
        ll x1 = val.top(); val.pop();
        ll x2 = val.top(); val.pop();
        char y = ops.top(); ops.pop();
        val.push(Calculate(x2, x1, y));
    }
    return val.top();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << Prefix(s) << endl;
    }
    return 0;
}
