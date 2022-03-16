#include <bits/stdc++.h>
using namespace std;
int n, k, c[35];
vector<string> a;
void in(){
	for(int i = 1; i <= k; i++)
		cout << a[c[i] - 1] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = c[i - 1] + 1; j <= n - k + i; j ++){
		c[i] = j;
		if(i == k)
			in();
		else Try(i + 1);
	}
}
int main(){
	cin >> n >> k;
	set<string> st;
	for(int i = 1; i <= n; i ++){
		string s; cin >> s;
		st.insert(s);
	}
	for(auto s: st) a.push_back(s);
	n = st.size();
	c[0] = 0;
	Try(1);
}
