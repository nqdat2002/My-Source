#include<stdio.h>
int main(){
	int n,s=0;
	scanf("%d",&n);
	while(n>0){
		s=s+n/5;
		n/=5;
	}
	printf("%d",s);
}