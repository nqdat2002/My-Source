#include<stdio.h>
#include<math.h>
int main(){	
	long long a,b,c,d,i;
	scanf("%lld%lld",&a,&b);
	if(a>0&&a<=b){
			if((int)sqrt(a)==(double)(sqrt(a)))
			{
				c=sqrt(b);
				d=sqrt(a);
			}
			else{
				c=sqrt(b);
				d=sqrt(a)+1;
			}
		printf("%ld\n",c-d+1);
	//	for(i=d;i<=c;i++)
	//	{
	//		printf("%d\n",i*i);
	//		}
	}
return 0;
}