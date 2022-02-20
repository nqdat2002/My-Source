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
	    i = 1;
	    S = 0;
	    while(n>0) 
	    {
	        S = sqrt(S+n);
	        n--;
	    }
	    printf("%.5f\n", S);
	}
    return 0;
}