#include<stdio.h>
#include<string.h>
int main(){
	char s[1000],x;
	gets(s);
    for(int k=0;k<strlen(s);k++){
        if(s[k]>=65&&s[k]<=90) s[k]=s[k]+32;
    }
	int t,i,j,dem;
	scanf("%d\n",&t);
	for (i=0;i<t;i++)
	{
		dem=0;
		scanf("\n%c",&x);
        if(x>=65&&x<=90) x=x+32;
		for (j=0;j<strlen(s);j++)
		{
			if (x == s[j])
			{
				dem++;
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}