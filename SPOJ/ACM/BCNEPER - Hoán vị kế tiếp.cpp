#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int cnt = 1; 
		string s; cin >> s;
		int kt = 1;
		int i = s.size() - 2;
		while(i >= 0 && (s[i] - '0') >= (s[i + 1] - '0')){
			i--; 
		}
		if(i >= 0){
			int j = s.size() - 1; 
			while((s[i] - '0') >= (s[j] - '0')) j--;
			swap(s[i], s[j]);
			int l = i + 1, r = s.size() - 1;
			while(l <= r){
				swap(s[l], s[r]);
				l++; r--;
			} 
		} 
		else kt = 0;
		if(kt) cout << x << " " << s << endl;
		else cout << x << " " << "BIGGEST" << endl;
		cnt++; 
	}
}
