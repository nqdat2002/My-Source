#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt[300];
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < s.size(); i ++)
			cnt[s[i]]++;
		int m = 0;
		for(int i = 0; i < 300; i++)
			m = max(m, cnt[i]);
		if(m <= (s.size() - m + 1))
			cout << "1";
		else cout << "-1";
		cout << endl;
	}
	return 0;
}
