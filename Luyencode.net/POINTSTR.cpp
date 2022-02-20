#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	int n, count=0;
	cin >> n;
	char a[n];
	string s[1000];
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	int i=0, t=0;
	while(i<=n-9){
		for(int j=t;j<t+9;j++) {
			s[i]+=a[j];
		}
		i++;
		t++;
	}
	for(int i=0;i<(n-8);i++) {
		if(s[i]=="luyencode") count++;
	}
	cout <<count;
}
