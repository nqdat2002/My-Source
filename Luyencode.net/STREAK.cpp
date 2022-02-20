#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j;
	scanf("%d\n",&n);
	int dem1=0,dem2=0;
	char s[50][10];
	for(i=1;i<=n;i++){
		gets(s[i]);
	}
	for(i=1;i<n;i++){
			if(s[i][0]==s[i+1][0])
			{
				if(s[i][0]=='T') dem1++;
				else if(s[i][0]=='H') dem2++;
			}
	}
	printf("%d\n%d",dem2+1,dem1+1); 
	return 0;
}
