#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str;
	ll cnt1 = 0, cnt2 = 0;
	cin >> str;
	for(ll i = 0; i < str.length(); i ++){
	    if(str[i] == 'A'){
	    	if(cnt1 < cnt2) 
				cnt2 = 1 + cnt1;
	    	else 
				cnt2 ++;
		}
		else {
			if(cnt1 < cnt2)
				cnt1 ++;
			else 
				cnt1 = 1 + cnt2;
		}
	}
	cout << cnt1;
	return 0;
}
