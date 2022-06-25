#include <bits/stdc++.h>
using namespace std;
char a[20];
const string r = "EH";
int n;
bool check(){
	for(int i = 0; i < n; i ++){
		if(a[0] == 'E' || a[n - 1] == 'H') 
			return false;
		else if(a[i] == a[i + 1] && a[i + 1] == 'H') 
			return false;
	}
	return true;
}
void output(){
	for(int i = 0; i < n; i ++) cout << a[i];
	cout << endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j ++){
		a[i] = r[j];
		if(i == n - 1){
			if(check())
				output();
		}
		else Try(i + 1);
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("test1.inp", "r", stdin);
	freopen("test1.out", "w", stdout);
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(0);
	}
	return 0;
}


