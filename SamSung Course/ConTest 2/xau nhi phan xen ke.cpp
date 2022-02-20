#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
/*
bool ch(vector<int> c, int n){
	for(int i = 0; i < n; i ++){
		if(c[i] == c[i + 1])
			return false;
	}
	return true;
}
int n, a[1000];
void xuly(){
	vector<int> c;
	for(int i = 1; i <= n; i ++){
		c.push_back(a[i]);
	}
	if(ch(c, n - 1)){
		for(int i = 0; i < n; i ++){
			cout << c[i];
		}
		cout << endl;
	}	
}
void Try(int i){
	int j;
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == n) xuly();
		else Try(i + 1);
	}
}
int main(){
	cin >> n;
	Try(1);
	return 0;
}
*/
int main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i ++){
		if(i % 2 == 1) cout << 0 << " ";
		else cout << 1 << " ";
	}
	cout << endl;
	for(int i = 1; i <= n; i ++){
		if(i % 2 == 0) cout << 0 << " ";
		else cout << 1 << " ";
	}
	return 0;
}
