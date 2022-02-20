#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0;
	int a;
	do
		{
		scanf("%d",&n);
		}
		while (n<5||n>1000000000);
	int i;
	for(i=1;i<n;i++)
	{
		s+=i;
		a=i;
		if(s>n)
		break;	
	}
	printf("%d ",a-1);
	return 0;
}