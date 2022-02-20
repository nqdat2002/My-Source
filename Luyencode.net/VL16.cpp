#include <stdio.h>
#include <math.h>
long UCLN(long a, long b){
	if(b == 0) return a;
	if(a < 0) a = -a;
	if(b < 0) b = -b;
	return UCLN(b, a % b);
	}
long BCNN(long a, long b){
	if(a < 0) a = -a;
	if(b < 0) b = -b;
	return (a * b / UCLN(a, b));
	}
int main(){
	long long a,b;
	scanf("%ld%ld",&a,&b);
	a=abs(a);
	b=abs(b);
	printf("%ld",BCNN(a,b));
	return 0;
}