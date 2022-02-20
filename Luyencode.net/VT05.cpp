#include<stdio.h>
int main()
{
	int a[100000];
	int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int i,j,h;
    int c=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]==x) c++;
	}
	printf("%d",c);
	return 0;
}
