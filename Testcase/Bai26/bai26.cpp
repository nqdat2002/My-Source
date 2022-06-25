#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	freopen("4.inp", "r", stdin);
    freopen("4.out", "w", stdout);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        queue<string> q;
        vector<string> v; 
        q.push("6");
        q.push("8");
        v.push_back("6");
        v.push_back("8");
        for(int i = 2; i <= n; i ++){
            for(int j = 1; j <= pow(2, i - 1); j ++){
                string top = q.front();
                q.pop();
                q.push(top + "6");
                q.push(top + "8");
                v.push_back(top + "6");
                v.push_back(top + "8"); 
            } 
        }
        reverse(v.begin(), v.end());
        for(auto x: v) cout << x << " ";
        cout << endl; 
    }
    return 0;
}
