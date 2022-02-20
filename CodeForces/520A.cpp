#include<bits/stdc++.h>
using namespace std;
int main(){
		int n; cin >> n;
		string str; cin >> str;
		vector <int> arr(10005);
		for (int i = 'A'; i <= 'z'; i ++)
			arr[i] = 0;
		for (int i = 0; i < str.length(); i ++)
			arr[str[i]]++;
		int cnt = 0;
		for (int i = 'A'; i <= 'z'; i ++)
			if (arr[i] > 0) cnt ++;
		if (26 - cnt <= n && str.length() >= 26)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	return 0;
}
