#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
	char s[200][200];
	int a,b,i,j,count=0;
	cin >> b >> a;
	for (i=0;i<b;i++){
		cin >> s[i];
	}
	for (i=0;i<b-1;i++){
		for (j=0;j<a-1;j++){
			if (s[i][j]=='.' && s[i][j+1]=='.') 
				++count;
			if (s[i+1][j]=='.' && s[i][j]=='.' ) 
				++count;
		}
	}
	cout << count;
	return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
	char s[300][300];
	int n,m,i,j,c=0;
	scanf("%d%d", &n, &m);
	for (i=0; i <n; i++){
		scanf("%s", s[i]);
	}
	for (i=0; i <n-1; i++){
		for (j=0; j<m-1; j++){
			if (s[i][j]=='.'&& s[i][j+1]=='.') ++c;
			if (s[i+1][j]=='.' && s[i][j]=='.' ) ++c;
		}
	}
	printf("%d", c);
}
