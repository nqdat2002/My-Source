#include<stdio.h>
int main()
{
	long long int a[3][3];
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%lli",&a[i][j]);
		}
	}
	long long int m=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[1][0]*a[2][1]*a[0][2];
	long long int n=a[2][0]*a[1][1]*a[0][2]+a[1][0]*a[0][1]*a[2][2]+a[0][0]*a[2][1]*a[1][2];
	printf("%lli",m-n);
	return 0;
}
