#include<stdio.h>
int main(){
	int n,gt=1,M[100][100],i,j,m;
	scanf("%d",&n);
	int t=n;
	for(i=1;i<=t/2+1;i++)
	{
		for(j=i;j<=n;j++)
		{
			M[i][j]=gt++;
		}
		for(j=i+1;j<=n;j++)
		{
			M[j][n]=gt++;
		}
		for(j=n-1;j>=i;j--)
		{
			M[n][j]=gt++;
		}
		for(j=n-1;j>i;j--)
		{
			M[j][i]=gt++;
		}
		n--;
	}
	for(i=1;i<=t;i++)
		{
			for(j=1;j<=t;j++)
			{
				printf("%d ",M[i][j]);
			}
		printf("\n");	
		}	
	return 0;

