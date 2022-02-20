#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
bool ch(vector<int> c, int n){
	for(int i = 0; i < n; i ++){
		if(c[i] - c[i + 1] == 1 || c[i] - c[i + 1] == -1)
			return false;
	}
	return true;
}
int n, a[1000];
bool check[1000] = {false};
int b[1000];
void xuly(){
	vector<int> c;
	for(int i = 1; i <= n; i ++){
		c.push_back(b[a[i]]);
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
	for(j = 1; j <= n; j ++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n) xuly();
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i ++){
			b[i] = i;
		}
		Try(1);
		cout << " " << endl;
	}
	return 0;
}
