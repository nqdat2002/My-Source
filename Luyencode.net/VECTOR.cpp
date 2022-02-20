#include<stdio.h>
int main(){
    long n;
    scanf("%ld",&n);
    if(n==1) printf("0");
    else if(n>1)
	{
   		unsigned long long t=n*(n-1);	
		printf("%llu",t);
	}
}