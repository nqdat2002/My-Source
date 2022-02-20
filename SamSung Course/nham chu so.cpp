#include<bits/stdc++.h>
using namespace std;
#define xau int t; cin >> t; cin.ignore();
#define so int t; cin >> t;
string AddBig_number(string a, string b) {
	string res = "";
	int tmp = 0;
	while(a.size() < b.size()) 
		a= "0" + a;
	while(a.size() > b.size()) 
		b= "0" + b;
	int len = a.size() - 1;
	for(int i = len; i >= 0; i--){
		int number = int(a[i] - '0') + int(b[i] - '0') + tmp;
		res = char(number % 10 + '0') + res;
		tmp = number / 10;
	}
	if(tmp > 0) 
		res = char(tmp + '0') + res;
	while(res[0] == '0') 
		res.erase(res.begin());
	return res;
}
string change_five_to_six(string a) {
	int len = a.size();
	for(int i = 0 ; i < len ; i++){
		if(a[i] == '5') 
			a[i] = '6';
	}
	return a;
}
string change_six_to_five(string b) {
	int len = b.size();
	for(int i = 0 ; i < len ; i++){
		if(b[i] == '6') 
			b[i] = '5';
	}
	return b;
}
void Solve(){
	string a, b;
	cin >> a >> b;
	cout << AddBig_number(change_six_to_five(a), change_six_to_five(b));
	cout << " ";
	cout << AddBig_number(change_five_to_six(b), change_five_to_six(a));
	cout << endl;	
}
int main() { 
	Solve();	
	return 0;
}
