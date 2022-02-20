#include<stdio.h>
int main(){
	long n,i,j;
	scanf("%ld",&n);
	long a[1000000];
	int m=n-1;
	for(i=0;i<m;i++){
		scanf("%ld",&a[i]);
	}	
	long long t=((long long)n*(n+1)/2);
	for(i=0;i<m;i++){
		t=t-a[i];
	}
	printf("%lld",t);
	return 0;
}