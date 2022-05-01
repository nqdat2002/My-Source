#include <bits/stdc++.h>
using namespace std;
int main(){		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, k; cin >> n >> k;
    string s, st;
    cin.ignore();
    getline(cin, s);
    s += s;
    while (k--){
        getline(cin, st);
        if (s.find(st) != -1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
	return 0;
}
