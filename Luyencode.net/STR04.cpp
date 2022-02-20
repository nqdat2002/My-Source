#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void doi(char s[])
{	int i,j;
	for (i=0;i<strlen(s);i++)
		if (s[i]>='A' && s[i]<='Z')
			s[i]=s[i]-'A'+'a';
	for(i=0;i<strlen(s)-1;i++)
		for(j=i+1;j<strlen(s);j++)
			if (s[i]-'0'>s[j]-'0')
			{
				char a = s[i];
				s[i] = s[j];
				s[j] = a;
			}
}
void demtansuat(char s[]){
	int i,j;
	doi(s);
	int c[10000];
	for (i=0;i<strlen(s);i++){
		c[i] = 0;
		for (j=0;j<strlen(s);j++)
			if (s[i]-'0'== s[j]-'0') c[i]++;
	}
	for (i=0;i<strlen(s);i+=c[i])
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z'))
		printf("%c %d\n",s[i],c[i]);
}
int main()
{
	char s[10000];
	gets(s);
	demtansuat(s);
	return 0;
}
