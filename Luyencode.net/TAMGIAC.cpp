#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	long a,b,c;
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a<b+c&&b<a+c&&c<a+b)
		{
		printf("%ld %0.2lf",(a+b+c),(double)0.25*sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c)));}
		else
		printf("NO");
	
	return 0;
}