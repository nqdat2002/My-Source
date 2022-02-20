#include<stdio.h>
int main(){
	int h;
	scanf("%d",&h);
	int k=h;
	int g=h-2;
	long long s1=2*k+2*(k-2);
	long long s2=(long long)g*g;
	printf("%lld %lld",s1,s2);
}
