#include<stdio.h>
int main() {
    long n,i;
    scanf("%ld",&n);
    long long dem=0;
    if ( n >= 0) {
    	for (i = 1;i<n;i++) {
    	dem +=i;
    	}
    }
	printf("%ld",dem);
    return 0;
}