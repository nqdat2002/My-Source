#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
ll Bin_to_Dec(string str){
	ll res = 0;
    for(int i = 0 ; i < str.length(); i ++){ 
        res = (2 * res + str[i] - 48);
    }
    return res;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str1, str2; cin >> str1 >> str2;
	   	cout << Bin_to_Dec(str1) * Bin_to_Dec(str2) << endl;
	}
	return 0;
}

