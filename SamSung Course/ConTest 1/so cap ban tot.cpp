#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int n, a[30000], k;
void inp(){
	cin >> n >> k;
	cin.ignore();
	for(int i = 1; i <= n; i ++){
		string str; getline(cin, str);
		a[i] = str.size();
		str.clear();
	}
}
void Solve(){
	int cnt = 0;
	for(int i = 1; i <= n - 1; i ++){
		for(int j = i + 1; j <= n; j ++){
			if(a[i] == a[j] && (j - i) <= k)
				cnt ++;
		}
	}
	cout << cnt;
}
int main(){
	inp();
	Solve();
	return 0;
}
