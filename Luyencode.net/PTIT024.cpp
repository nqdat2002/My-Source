#include<stdio.h>
#include<string.h>
#include<math.h>
int snt(int x)
{	
	if(x<2) return 0;
	else{
	int i;
	for(i=2;i<=sqrt(x);i++)
	if(x%i==0||i==1)
		return 0;
	return 1;
	}
}
int main(){
	char s[1000];
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++){
		if(snt(i)&&s[i]!=' '){
			s[i]='*';
		}
	}
	puts(s);
}
