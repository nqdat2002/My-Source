#include<stdio.h>
int uocso(int a,int b){
	int c;
	while(a!=b){
		if(a>b)
			c=a-b;
		else
			c=b-a;
			a=b;
			b=c;
			}
	return c;
}
int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		if(a==b) printf("1\n");
		if(a!=b){
			if(a>b){
				int t=a;
				a=b;
				b=t;}
		if(uocso(a,b)==1) printf("%d\n",a*b);
			else printf("%d\n",(a*b)/(uocso(a,b)*uocso(a,b)));		
		}
	}
	return 0;
}
