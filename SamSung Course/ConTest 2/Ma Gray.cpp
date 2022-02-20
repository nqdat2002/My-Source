#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		vector <string> str;
		if(n > 0){
			str.push_back("0");
			str.push_back("1");
			int i, j;
			for(i = 2; i < (1 << n); i = i << 1){
				for(j = i - 1; j >= 0; j --){
					str.push_back(str[j]); 
				} 
				for(j = 0; j < i; j ++){
					str[j] = "0" + str[j]; 
				} 
				for(j = i; j < 2 * i; j ++){
					str[j] = "1" + str[j]; 
				} 
			}
			for(i = 0; i < str.size(); i ++){
				cout << str[i] << " "; 
			} 
			cout << endl; 
		} 
	} 
	return 0;
} 
