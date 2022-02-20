#include<stdio.h>
int main(){
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	int m=a,n=b;
	int c;	
	while(a!=b){
		if(a>b)
			c=a-b;
		else
			c=b-a;
		a=b;
		b=c;
	}
	for(i=1;i<=c;i++){
		if(m%i==0&&n%i==0) 
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
