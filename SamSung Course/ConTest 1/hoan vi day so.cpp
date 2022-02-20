#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
int n, a[1000];
bool check[1000] = {false};
int b[1000];
void in(){
	for(int i = 1; i <= n; i ++)
		cout << b[a[i]] << " ";
	cout << endl;
}
void Try(int i){
	int j;
	for(j = 1; j <= n; j ++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n) in();
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> b[i];
	}
	sort(b + 1, b + n + 1);
	Try(1);
	return 0;
}

