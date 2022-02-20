#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int j=0;
	char a[1000],b[1000];
	int count=0;
	for (int i=0; i<s.length(); ++i){
		int k=0;
		if (((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')) &&
		 (s[i+1]<='9' && s[i+1]>='0')) {
		a[k++]=s[i];
		}
		count+=atoi(a);
	}
	cout<<count;
	return 0;
}
