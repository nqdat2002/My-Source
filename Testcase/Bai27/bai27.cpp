#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	cout.tie(NULL);
	freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    queue<string> q;
    vector<string> v;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while(v.size() <= 10000){
        string s = q.front();
        q.pop();
        q.push(s + "6");
        q.push(s + "8");
        v.push_back(s + "6");
        v.push_back(s + "8");
    }
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
        for(int i = 0; i < n; ++i){
            string s = v[i];
            reverse(s.begin(), s.end());
            cout << v[i] << s << " ";
        }
        cout << endl;
    }
    return 0;
}
