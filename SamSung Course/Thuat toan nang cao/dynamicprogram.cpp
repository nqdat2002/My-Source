#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int n;
string s;
const int mx = 1005;
int d[mx][mx];
//int *a, *b;
/*
int D(int i, int j){
	if(i > j) return 0;
	if(i == j) return 1;
	if(s[i] == s[j]) 
		return D(i + 1, j - 1) + 2;
	else 
		return max(D(i, j - 1), D(i + 1, j));
}
/*
void Pal(){
	s = "abcdedcba";
	n = s.size();
	cout << n - D(0, n - 1);
}
*/
// 2D Array
int dp(){
	memset(d, 0, sizeof(d));
	for(int i = 0; i < n; i ++) d[i][i] = 1;
	for(int i = n - 1; i >= 0; i --){
		for(int j = i + 1; j < n; j ++){
			d[i][j] = (s[i] == s[j]) ?  d[i + 1][j - 1] + 2 : 
			max(d[i][j - 1], d[i + 1][j]);
		}
	}
	return d[0][n - 1];
}
/*
int dp1(){
	a = new int[n];
	b = new int[n];
	int *c;
	memset(a, 0, (n + 1) * sizeof(int));
	memset(b, 0, (n + 1) * sizeof(int));
	a[n - 1] = 1;
	for(int i = n - 1; i >= 0; i --){
		b[i] = 1;
		for(int j = i + 1; j < n; j ++){
			b[j] = (s[i] == s[j]) ?  a[j - 1] + 2 : max(b[j - 1], a[j]);
		}
		c = a; a = b; b = c;
	}
//	memcpy(a, b, sizeof(b));
	int maxlen = a[n - 1];
	delete [] a;
	delete [] b;
	return maxlen;
}
*/
void Pal(){
	getline(cin, s);
//	s = "abcdedcba";
	n = s.size();
	cout << n - dp() << endl; 
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		Pal();
	}
	return 0;
}

