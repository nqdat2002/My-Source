#include <bits/stdc++.h>
using namespace std;
/*
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		stack<int> stk;
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			stk.push(a[i]);
		}
		stack <int> s2;
		int k = n - 2;
		stk.pop();
		s2.push(-1);
		while(!stk.empty()){
			int t = stk.top();
			stk.pop(); 
			int j = k;
			for(j = k; j < n; j ++){
				if(t < a[j]) {
					s2.push(a[j]); 
					break; 
				} 
			}
			if(j == n) s2.push(-1); 
			k--; 
		} 
		while(!s2.empty()){
			cout << s2.top() << " ";
			s2.pop(); 
		} 
		cout << endl; 
	} 
	return 0;
}



*/

void solve(int a[], int n){
	int b[n];
	stack<int> stk;
	for(int i = n - 1; i >= 0; i --){
		while(!stk.empty() && stk.top() <= a[i]) 
			stk.pop();
		if(!stk.empty()) b[i] = stk.top();
		else b[i] = -1;
		stk.push(a[i]);
	}
	for(int i = 0; i < n; i ++) cout << b[i] << " ";
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, n);
	}
	return 0;
}