#include <bits/stdc++.h>
using namespace std;
int a[10], b[10], n;
bool xet[10];
void in(){
	for(int i = 1; i <= n; i ++)
		cout << b[a[i]] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = 1; j <= n; j ++){
		if(!xet[j]){
			a[i] = j;
			xet[j] = true;
			if(i == n) in();
			else Try(i + 1);
			xet[j] = false;
		}
	}
}
int main(){
	memset(a, 0, sizeof(a));
	cin >> n;
	for(int i = 1; i <= n; i ++) cin >> b[i];
	sort(b + 1, b + n + 1);
	Try(1);
	return 0;
}
