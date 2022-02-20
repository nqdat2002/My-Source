#include<stdio.h>
int main(){
	long n;
	int dem=0;
	long i;
	scanf("%ld",&n);
	if(n > 0)
	for(i = n; i >= 1; i--)
	if(n % i == 0) dem++;
	if(n < 0)
	for(i = -n; i >= 1; i--)
		if(n % i == 0) dem++;
	printf("%d",dem);
	return 0;
}