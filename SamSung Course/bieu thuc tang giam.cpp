#include <bits/stdc++.h>
using namespace std;
void Solve(){
	string str; cin >> str;
	vector<int> arr;
	int min = 1, pos = 0;
	if(str[0] == 'I') {
		arr.push_back(1);
		arr.push_back(2);
		min = 3, pos = 1;
	}
	else{
		arr.push_back(2);
		arr.push_back(1);
		min = 3; pos = 0;
	}
	for (int i = 1; i < str.length(); i++) {
		if (str[i] == 'I') {
			arr.push_back(min);
			min ++; 
			pos = i + 1;
		}
		else {
			arr.push_back(arr[i]);
			for (int j = pos; j <= i; j++)
				arr[j]++;
			min ++;
		}
	}
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
	cout << endl;
}
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		Solve();
	}
	return 0;
}

