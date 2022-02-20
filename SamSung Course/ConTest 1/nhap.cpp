#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
bool Prime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n) ; i ++)
		if(n % i == 0) return false;
	return true;
}
int n, a[1000] = {0}, b[1000];
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i ++)
		cin >> b[i];
	sort(b + 1, b + n + 1, greater<int>());
}
void outp(){
	vector<int> c;
	int sum = 0;
	for(int i = 1; i <= n; i ++){
		if(a[i] == 1){
			c.push_back(b[i]);
			sum += b[i];
		}
	}
	if(Prime(sum)){
		for(int i = 0; i < c.size(); i ++){
			cout << c[i] << " ";
		}
		cout << endl;
	}
}
void Try(int i){
	int j;
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == n) outp();
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		Try(1);
	}
	return 0;
}
