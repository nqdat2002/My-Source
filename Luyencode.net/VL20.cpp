#include<stdio.h>
#include<math.h>
int main()
{
	char s1,s2;
	do
	{
		scanf("%c",&s1);
	}
	while(s1<'a' || s1>'z');
	do
	{
		scanf("%c",&s2);
	}
	while(s2<s1||s2>'z');
	for(char i=s1;i<=s2;i++)
	{
		printf("%c ",i-32);
	}
	return 0;
}