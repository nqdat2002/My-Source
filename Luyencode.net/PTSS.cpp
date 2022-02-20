#include<stdio.h>
int main(){
	int n,i,a,b,c;
	long long int d;
	c=1;
		scanf("%lli",&d);
		a=2;
		b=0;
	while(a<=d){
		if(d%a==0){
			d=d/a;
			b++;
			if(b==1)
			printf("%d ",a);
		}
		if(d%a!=0){
			if(b>0) 
				printf("%d\n",b);
			a++;
			b=0;
		}
	}
	c++;	
	return 0;	
}
