#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int i,j;
	do
	{
		scanf("%d",&n);
	}
	while(n<1||n>10000);
	int a[n];
	for(int i=0;i<n;i++)
	{
		do
		{
			scanf("%d",&a[i]);
		}
		while(abs(a[i])>1000000);
	}
	if(n==1)
	{
		printf("%d",a[0]);
	}
	else
	{
		int t=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
			if(a[j]>a[i])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
			printf("%d ",a[i]);
		}
	}
	return 0;
}