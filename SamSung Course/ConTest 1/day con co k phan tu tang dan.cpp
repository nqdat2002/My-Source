#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int n, k, a[1000], b[1000];
void inp(){
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
		cin >> b[i];
	sort(b + 1, b + n + 1);
}
void in(){
	for(int i = 1; i <= k; i ++)
		cout << b[a[i]] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		Try(1);
	}
}
