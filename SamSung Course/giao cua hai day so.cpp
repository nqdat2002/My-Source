#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, sz; cin >> n >> m;
	set<int> st;
	for(int i = 0; i < n; i ++){
		int tmp; 
		cin >> tmp;
		st.insert(tmp);
	}
	vector<int> res;
	for(int i = 0; i < m; i ++){
		sz = st.size();
		int tmp; cin >> tmp;
		st.insert(tmp);
		if(st.size() == sz) 
			res.push_back(tmp);
		st.erase(tmp);
	}
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i ++){
		cout << res[i] << " ";
	}
	return 0;
}

