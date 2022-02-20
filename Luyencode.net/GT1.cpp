#include<stdio.h>
int main()
{ 
	unsigned int n;
	unsigned long long giaithua=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		giaithua*=i;
	}	
	printf("%lld",giaithua);
	return 0;
	
		
}