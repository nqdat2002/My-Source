#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int i, n;
	    float S;
	    do
	    {      
	        scanf("%d", &n);
	
	       
	    }while(n < 1);
	
	    S = sqrt((float)2);
	    for(i = 2; i <= n; i++)
	    {
	        S = sqrt(2 + S);
	    }
	    printf("%.5f\n", S);
	}
    return 0;
}