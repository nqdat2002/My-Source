#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long c;
		scanf("%ld",&c);
		long x=c/2;
		if(x%2==0){
			printf("%lld",(long long)x*x/4);
		}
		else{
			long a=(long)(x/2);
			long b=a+1;
			printf("%lld",(long long)a*b);
		}
	printf("\n");
	}
}
