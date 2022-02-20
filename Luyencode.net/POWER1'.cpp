#include<stdio.h>
#include<math.h>
#define mod 1000000007
long long nhan(long long a,long long b)
{
    if (b == 0) 
        return 0;
    long long t = nhan(a, b / 2);     	
    t = (t + t) % mod; 
    if (b % 2 == 1) 
        t = (t + a) % mod;
} 
long long mu(long long a,long long b)
{
    if (b == 0) 
        return 0;
    long long t = mu(a, b / 2);     	
    t = (t * t) % mod; 
    if (b % 2 == 1) 
        t = (t * a) % mod;
    return t;
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld",mu(a,b));
	return 0;
}
