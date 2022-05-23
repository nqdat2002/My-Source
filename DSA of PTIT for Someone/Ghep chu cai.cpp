#include <bits/stdc++.h>
using namespace std;
char x[15] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char c;
int n, a[15];
bool ok;
bool check(){
	for(int i = 2; i < n; i ++){
		if(x[a[i]] == 'A' || x[a[i]] == 'E'){
			if((x[a[i - 1]] != 'A' && x[a[i - 1]] != 'E') && (x[a[i + 1]] != 'A' && x[a[i + 1]] != 'E'))
				return false;
		}
	}
	return true;
}

void next(){
	int i = n - 1;
	while(a[i] > a[i + 1]) --i;
	if(i == 0) ok = true;
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	cin >> c;
	n = c - 'A' + 1;
	for(int i = 1; i <= n; i ++) a[i] = i;
	ok = false;
	while(!ok){
		if(check()){
			for(int i = 1; i <= n; i ++) cout << x[a[i]];
			cout << endl;
		}
		next();
	}
	return 0;
}
