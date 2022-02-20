#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int a, b, c, d;
int main(){
	cin >> a >> b >> c >> d;
	int x = abs(a - c);
	int y = abs(b - d);
	if(x == y) cout << x;
	else {
		int m = min(x, y);
		cout << m + abs(x - y);
	}
	return 0;
}

