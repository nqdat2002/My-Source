#include<stdio.h>
int main()
	{	
		int i;
    	long n;
		long long s;
		scanf("%ld",&n);
		for (i=0;i<=30;i++)
		{	 s=n*i;
			printf("%ld x %ld = %lld\n",n,i,s);
		}
			
	}
