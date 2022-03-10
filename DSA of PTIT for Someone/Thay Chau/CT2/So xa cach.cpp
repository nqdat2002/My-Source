#include <bits/stdc++.h>
using namespace std;
int n, a[15], b[15];
bool visited[15];
bool check(vector<int> c, int n){
	for(int i = 0; i < n; i ++)
		if(c[i] - c[i + 1] == 1 || c[i] - c[i + 1] == -1)
			return false;
	return true;
}
void Solve(){
	vector<int> c;
	for(int i = 1; i <= n; i ++)
		c.push_back(b[a[i]]);
	if(check(c, n - 1)){
		for(int i = 0; i < n; i ++)
			cout << c[i];
		cout << endl;
	}	
}
void Try(int i){
	for(int j = 1; j <= n; j ++){
		if(!visited[j]){
			a[i] = j;
			visited[j] = true;
			if(i == n) Solve();
			else Try(i + 1);
			visited[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i ++)
			b[i] = i;
		memset(visited, false, sizeof(visited));
		memset(a, 0, sizeof(a));
		Try(1);
		cout << " " << endl;
	}
	return 0;
}

