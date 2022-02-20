#include<stdio.h>
#define lli long long int
lli swapp(lli m, lli n){
	if(m>n){
		lli t=m;
		m=n;
		n=t;
	}
	return m,n;
}
int main(){
	lli a,b,c,d;
	scanf("%lli%lli%lli%lli",&a,&b,&c,&d);
	if(a>b) swapp(a,b);
	if(c>d) swapp(c,d);
	if(b<c||a>d) printf("NO");
	else printf("YES");
	return 0;
}
