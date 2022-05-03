#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int m = 1; m<= t; m++){
		string i;string p;
		cin>>i>>p;
		int j = 0,k = 0;
		while(k < p.length()){
			if(i[j] == p[k]){
				++j;++k;
			}
			else ++k;
			if(j == i.length()) break;
		}
		cout << "Case #" << m << ": ";
		if(j == i.length()) cout << p.length()-i.length()<<endl;
		else cout << "IMPOSSIBLE"<<endl;
	}
	return 0;
}
