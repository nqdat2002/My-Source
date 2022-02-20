#include <iostream>
#include <string>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string str;
	 	cin >> str;
		for(int i = str.length() - 1; i >= 0; i --){
			if(str[i] == '0'){
				str[i] = '1';
				break;
			}
			else str[i] = '0';
		}
		for(int i = 0; i < str.length(); i ++) 
			cout << str[i];
		cout << endl;
	}	
	return 0;
}
