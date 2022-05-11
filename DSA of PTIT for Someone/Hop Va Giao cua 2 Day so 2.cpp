#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m; 
		cin >> n >> m;
		int a[n], b[m];
		set<int> st, sm;
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			st.insert(a[i]);
		}
		for(int i = 0; i < m; i ++){
			cin >> b[i];
			st.insert(b[i]);
		}
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] == b[j]){
				sm.insert(a[i]);
				i++;
				j++;
			}
			else if(a[i] <= b[j]) i++;
			else j++;
		}
		for(auto x: st) cout << x << " ";
		cout << endl;
		for(auto y: sm) cout << y << " ";
		cout << endl;
	}
	return 0;
}
