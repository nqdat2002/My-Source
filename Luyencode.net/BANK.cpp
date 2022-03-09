#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i, b, a) for (int i = (b), _a = (a); i >= _a; i--)
#define REP(i, n) for (int i = 0, _n = (n); i < _n; i++)
#define FORE(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define ALL(v) (v).begin(), (v).end()
#define fi first
#define se second
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define div ___div
#define next ___next
#define prev ___prev
#define left ___left
#define right ___right
using namespace std;

template <class X, class Y>
bool minimize(X &x, const Y &y) {
    X eps = 1e-9;
    if (x > y + eps) {
        x = y;
        return true;
    } else
        return false;
}
template <class X, class Y>
bool maximize(X &x, const Y &y) {
    X eps = 1e-9;
    if (x + eps < y) {
        x = y;
        return true;
    } else
        return false;
}
template <class T>
T Abs(const T &x) {
    return (x < 0 ? -x : x);
}
int MOD = 1e9 + 7;
const int INF = (int)1e9 + 7;
const long long INFLL = (long long)1e18 + 7;
/** GLOBAL VARIANT AND CONSTANT **/
const int maxn = 1000001;
int n;
long long cash[maxn];
vector<long long> pref;
long long sum(int op, int gg) { return pref[op] - pref[gg - 1]; }
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> n >> T;

    for (int i = 1; i <= n; i++) cin >> cash[i];

    sort(cash + 1, cash + n + 1);
    pref.emplace_back(cash[1]);
    for (int i = 1; i < n; i++) pref.push_back(pref[i - 1] + cash[i + 1]);

    while (T--) {
        long long val;
        cin >> val;
        vector<long long>::iterator pos;
        pos = lower_bound(pref.begin(), pref.end(), val);
        if (pref[pos - pref.begin()] - val) {
            int left = 1;
            pos--;
            while (cash[pos - pref.begin() + left + 1] + sum(pos - pref.begin() + left - 1, left) <= val) {
                left++;
            }
            int leng = pos - pref.begin() + 1;
            long long minval = cash[left];
            cout << leng << " " << minval << "\n";
        } else
            cout << pos - pref.begin() + 1 << " " << cash[1] << '\n';
    }
    return 0;
}
