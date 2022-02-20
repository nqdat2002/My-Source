#include<stdio.h>
int main()
{
	double s=0;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){s=s+1*1.0/i;}
	printf("%.4f",s-1);
	return 0;	
}