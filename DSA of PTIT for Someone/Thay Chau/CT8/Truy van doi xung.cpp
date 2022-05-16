#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin >> s;
    int q; cin >> q;
    while(q--){
        char u; cin >> u;
        int l, r; cin >> l >> r;
        if(u == 'q'){
            string t = s;
            reverse(t.begin() + l - 1, t.begin() + r);
            if(t == s) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
        else s[l - 1] = r + 48;
    }
}