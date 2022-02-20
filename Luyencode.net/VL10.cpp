#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
    if(s[0] != '-') cout << s.size() << endl;
    else cout << s.size() - 1 << endl;
	return 0;
}
