#include<stdio.h>
#include<math.h>
#define max 1000000
int main(){
	double f[max];
	int t,i,n;
	scanf("%d",&t);
	f[0] = 0;
	for (i = 1; i <=max; i++)
		f[i] = sqrt((double)i + (f[i - 1]));
	for (i = 0;i < t;i++)
	{
		scanf("%d",&n);
		printf("%0.5lf\n",f[n]);
	}
	return 0;
}
