#include<stdio.h>
int main(){
	int b;
	double n;
	scanf("%lf",&n);
	if(n>0&&n==(int)n){
		b=(int)n;
		if((b%4==0)&&b%100!=0||b%400==0)
		printf("1");
		else printf("0");
	}
	else printf("Du lieu khong hop le");
}
