#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        long long res = 0;
        for(int i = 0; i < s.size(); i ++){
            res += s[i] - 48;
        }
        cout << res << endl;
    }
	return 0;
}
