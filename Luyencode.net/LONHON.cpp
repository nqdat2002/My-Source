#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int i,k;
	if(a>=b) printf("0");
	else
	{	int i=1;
		while(a<=b)
			{	
				a=3*a;
				b=2*b;
				if(a>b){
					k=i;
					break;
				}
				else i++;		
			}
			printf("%d",k);
		}
}
