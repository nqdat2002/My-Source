#include<stdio.h>
int main() {
	int n,m,i,a,b;
	scanf("%d%d",&n,&m);
	b=n;
	if(n%2==0) a=n/2;
	else a=n/2+1;
	for(i=a;i<b;i++){
		if(i%m==0) {
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
