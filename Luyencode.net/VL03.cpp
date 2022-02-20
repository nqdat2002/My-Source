#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	printf("%ld\n",(long)n*(n+1)/2 -1 +2*n);
	return 0;
}