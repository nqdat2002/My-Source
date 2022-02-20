#include<bits/stdc++.h>
using namespace std;
int Solve(int s, int t){
	int a[20000], i;
	for(i = 0; i < 20000; i ++) a[i] = INT_MAX;
	queue <int> q;
	q.push(s);
	a[s] = 0;
	while(!q.empty()){
		i = q.front(); 
		q.pop();
		if(a[t] != INT_MAX) break;
		if(i - 1 > 0 && a[i - 1] == INT_MAX){
			a[i - 1] = min(a[i - 1], a[i] + 1);
			q.push(i - 1);
		}
		if(i * 2 < 20000 && a[i * 2] == INT_MAX){
			a[i * 2] = min(a[i * 2], a[i] + 1);
			q.push(i * 2);
		}
	}
	return a[t];
}
int main(){
	int t; cin >> t;
	while(t--){
		int s, n;
		cin >> s >> n;
		cout << Solve(s, n) << endl;
	}
	return 0;
}