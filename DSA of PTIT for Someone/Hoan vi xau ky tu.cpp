#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool vs[100];
string s;
void Try(int i){
	for(int j = 1; j <= n; ++j){
		if(!vs[j]){
			a[i] = j;
			vs[j] = true;
			if(i == n){
				for(int k = 1; k <= n; k ++)
					cout << s[a[k] - 1];
				cout << " ";
			}
			else Try(i + 1);
			vs[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		memset(vs, false, sizeof(vs));
		Try(1);
		cout << endl;
	}
}
