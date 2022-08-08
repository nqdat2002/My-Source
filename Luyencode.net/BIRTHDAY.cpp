#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, t;
priority_queue<int> pq;

void Max_self(int &a, int b) {
    if (b > a)
        a = b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n >> t;
    int ans = 0;
    ll s = 0;
    while (n--) {
        int idx, val;
        cin >> idx >> val;
        if (idx > t)
            break;
        pq.push(val);
        s += 1ll * val;
        while (s + 1ll * idx > 1ll * t) {
            s -= 1ll * pq.top();
            pq.pop();
        }
        Max_self(ans, pq.size());
    }
    cout << ans;
    return 0;
}
