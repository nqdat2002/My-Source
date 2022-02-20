#include <bits/stdc++.h>
using namespace std;
void Solve(){
	string str; cin >> str;
	vector<int> a;
	int min = 1, pos = 0;
	if(str[0] == 'I') {
		a.push_back(1);
		a.push_back(2);
		min = 3, pos = 1;
	}
	else{
		a.push_back(2);
		a.push_back(1);
		min = 3; pos = 0;
	}
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == 'I') {
			a.push_back(min);
			min ++; 
			pos = i + 1;
		}
		else {
			a.push_back(a[i]);
			for (int j = pos; j <= i; j++)
				a[j]++;
			min ++;
		}
	}
	for (int i = 0; i < a.size(); i++)
		cout << a[i];
	cout << endl;
}
int main() {
	int t; cin >> t;
	cin.ignore();
	for(int i = 0; i < t; i ++) {
		cout << "Test " << i + 1 << ": ";
		Solve();
	}
	return 0;
}
