#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main(){
	FileIO();
	int t;
	cin >> t;
	while (t--) {
		int c, m;
		cin >> c >> m;
		if(c % (m + 1) == 0) 
			cout << "Second";
		else 
			cout << "Fisrt";

		cout << endl;
	}
	return 0;
}

