#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--) {
		int c, m;
		cin >> c >> m;
		if(c % (m + 1) == 0) 
			cout << "Second";
		else 
			cout << "First";

		cout << endl;
	}
	return 0;
}
