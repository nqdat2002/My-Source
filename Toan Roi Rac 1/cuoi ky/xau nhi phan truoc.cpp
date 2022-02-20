#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str; cin >> str;
		for(int i= str.size() - 1; i >= 0; i --){
			if(str[i] == '1'){
				str[i]='0';
				for(int j = i + 1; j < str.size(); j ++) 
					str[j] = '1';
				break; 
			}
			else str[i] = '1'; 
		}
		for(int i = 0; i < str.size(); i ++) 
			cout << str[i];
		cout << endl;
	}	
	return 0;
}
