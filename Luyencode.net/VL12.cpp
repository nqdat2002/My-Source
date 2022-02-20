#include<stdio.h>
#include<math.h>
int main()
    {
    int n;
    scanf("%d",&n);
    int m=abs(n);
    if(n==0)
    	{
  	  printf("INF");
   		}
   	else
    	{
   		 while (m>0)
    	{
   			 if(n%m==0)
    			{
    			printf("%d ", m);
    			}
    		m--;
    	}
    	}
   return 0;
}