/*
#include<bits/stdc++.h>
using namespace std;
int n, k;
string res[22];
string cs = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void Init(){
	res[1] = "A";
//  res[2] = "ABA"
//	res[3] = "ABACABA";
//	res[4] = "ABACABADABACABA";
// 	res[5] = "ABACABADABACABADABACABADABACABA";
	for(int i = 2; i <= 21; i ++){
		res[i] = res[i - 1] + cs[i] + res[i - 1];
	}
}
string dq(int n){
	if(n == 1) return "A";
	else return (dq(n - 1) + cs[n] + dq(n - 1));
}
int main(){
//	Init();
	int t; cin >> t; 
	while(t--){
		cin >> n >> k;	
		string str = dq(n);
		cout << str[k - 1] << endl;
	}
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
char dq(int k, int x) {
	if ((k - 1) % 2 == 0) return char(x + 65);
	else if ((k - 2) % 4 == 0) return char(x + 66);
	else return dq(k / 4, x + 2);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << dq(k, 0) << endl;;
	}
	return 0;
}
