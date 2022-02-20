#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int main(){
	int n, a; cin >> n;
	long long res = 0;
	for(int i = 0; i < n; i ++){
		cin >> a;
		if(a > 0) res += a * 2;
	}
	cout << res;
	return 0;
}

