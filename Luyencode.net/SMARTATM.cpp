#include<stdio.h>
#define max 10
int main()
{
    int a[20];
    int t;
    int i;
	int n;
	long long k,kq=0;
	scanf("%d",&n);
	scanf("%lld\n",&k);
	for(i=n;i>0;i--)
	scanf("%d",&a[i]);
    	
		for(i=1;i<=n;i++)
	    {
	       	kq+=k/a[i];
	       	k%=a[i];
		}
	   	printf("%lld",kq);         
	return 0; 
}
