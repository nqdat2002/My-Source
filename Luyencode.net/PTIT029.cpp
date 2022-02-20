#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int mod = 1e9 + 7;
int n;
int main() {
    priority_queue<long long, vector<int>, greater<int> > p;
    cin >> n;
    long long x,y;
    for (int i = 0; i < n; i++) {
        cin >> x;
        p.push(x);
    }
    long long res = 0;
    while (p.size() > 1) {
        x = p.top(); p.pop();
        y = p.top(); p.pop();
        p.push(x+y);
        res = (res+x+y) % mod;
    }
    cout << res % mod;
    return 0;
}
