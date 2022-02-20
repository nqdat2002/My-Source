#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int res = 0;
	    for (int i = 0; i < s.length(); i++) {
	        int u = i, v = i;
	        while (u >= 0 && v < s.length()) {
	            if (s[u] == s[v]) {
	                res = max(res, v - u + 1);
	                u--;
	                v++;
	            } else
	                break;
	        }
	    }
	    for (int i = 0; i < s.length(); i++) {
	        int u = i, v = i + 1;
	        while (u >= 0 && v < s.length()) {
	            if (s[u] == s[v]) {
	                res = max(res, v - u + 1);
	                u--;
	                v++;
	            } else
	                break;
	        }
	    }
	    cout << res << endl;
	}
    return 0;
}
