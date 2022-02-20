#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 	cin >> t;
	while (t--) {
		int n, x, mark = 0; cin >> n;
		set<int> st;
		for (int i = 0; i < n; i++) {
			x = st.size();
			int tmp; cin >> tmp;
			st.insert(tmp);
			if(x == st.size()){
				mark = 1;
				cout << tmp << endl;
				break;
			}
		}
		if (mark == 0)
			cout << "NO" << endl;
	}
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
	    long a[100005];
	    cin >> n;
	    for (int i = 0; i < n; ++i) {
	        cin >> a[i];
	    }
	    int kt = 0;
	    for (int i = 0; i < n - 1; ++ i) {
	    	for(int j = i + 1; j < n; ++ j){
	    		if(a[i] == a[j]){
	    			cout << a[i] << endl;
	    			kt = 1;
	    			break;
				}
			}
			if(kt == 1) break;
		}
	    if(!kt) cout << "NO" << endl;
	}
    return 0;
}
*/
