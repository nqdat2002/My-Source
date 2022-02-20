/*#include<bits/stdc++.h>

using namespace std;
int main() {
	string s;
	cin >> s;
	int dem(0);
	for (int i=0; i<s.length(); ++i) {
		if (((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')) && (s[i+1]<='9' && s[i+1]>='0')) ++dem;
	}
	if (s[0]<='9' && s[0]>='0') ++dem;
	cout << dem;
	return 0;
}*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	string s;
	scanf("%s",&s);
	int count=0;
	for (int i=0; i<strlen(s); ++i) {
		if (((s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')) && (s[i+1]<='9' && s[i+1]>='0')) count++;
	}
	if (s[0]<='9' && s[0]>='0') count++;
	printf("%d",count);
	return 0;
}
