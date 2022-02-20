#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	float d1=(-1+sqrt(8*n+1))/2;
//	printf("%f",d1);
	if(d1 > 0&& (int)d1==d1) 
	printf("Yes.");
	else printf("No.");
}