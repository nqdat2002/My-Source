#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<0) n=n*(-1);
	int t=n%1000;
	if(t>0&&t<10) printf("00%d",t);
	else if(t>=10&&t<100) printf("0%d",t);
	else if(t>100) printf("%d",t);
	
}
