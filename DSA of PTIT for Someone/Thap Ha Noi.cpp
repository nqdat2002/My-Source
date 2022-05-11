#include <bits/stdc++.h>
using namespace std;
void Try(int n, char a, char b, char c){
	if(n == 1) cout << a << " -> " << c << endl;
	else{
		Try(n - 1, a, c, b);
		cout << a << " -> " << c << endl;
		Try(n - 1, b, a, c);
	}
}
int main(){
	int n; cin >> n;
	Try(n, 'A', 'B', 'C');
	return 0;
}
