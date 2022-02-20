#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
	char s[1005];
	cin >> s;
	int t;
	for(int i = strlen(s)-1 ; i>=0 ; i--){
		if(s[i]>'0'){
			t=i;
			break;
		}
	}
	for(int i=t;i>=0;i--)
		cout << s[i];
	return 0;
}
