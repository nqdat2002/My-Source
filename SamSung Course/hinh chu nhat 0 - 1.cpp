#include <bits/stdc++.h>
using namespace std;
int n, m, arr[505][505];
int max_of_area(int x[]){
	int res = 0, i = 0;
	stack<int> st;
	while(i < m){
		if(st.empty() || x[i] >= x[st.top()]) 
			st.push(i++);
		else{
			int top = st.top(); st.pop();
			if(st.empty()){
				res = max(res, i * x[top]);
			}
			else{
				res = max(res, x[top]* (i - st.top() - 1));
			}
		}
	}
	while(!st.empty()){
		int top = st.top(); st.pop();
		if(st.empty()){
			res = max(res, i * x[top]);
		}
		else{
			res = max(res, x[top] * (i - st.top() - 1));
		}
	}
	return res;
}
void Solve(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) 
			cin >> arr[i][j];
	}
	int tmp[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0) tmp[i][j] = arr[i][j];
			else if(arr[i][j]){
				tmp[i][j] = tmp[i - 1][j] + 1;
			}
			else tmp[i][j] = 0;
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, max_of_area(tmp[i]));
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		Solve();
	}
	return 0;
}
 
 
