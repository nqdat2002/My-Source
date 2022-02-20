#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int n = s.size();
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i ++){
		if(islower(s[i])) cnt1 ++;
		if(isupper(s[i])) cnt2 ++;
	}
	if(cnt1 >= cnt2){
		for(int i = 0; i < n; i ++)
			s[i] = tolower(s[i]);
		cout << s;
	}
	
	else{
		for(int i = 0; i < n; i ++)
			s[i] = toupper(s[i]);
		cout << s;
	}
	return 0;
}