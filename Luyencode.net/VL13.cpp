#include<stdio.h>
int main()	
{
	long long n,i;
	scanf("%lld",&n);
	int sum=0;
	int b=n;
	if(n==0) printf("NO");
	if(n>0){
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0) sum+=i;
							
		}	
		if (sum!=b) printf("NO");
		else printf("YES");
	}
	if(n<0)
    {	
        for(i=1;i<=(-n)/2;i++)
        {	
            if(n%i==0)
                sum+=i;
        }
        if(sum==b)
            printf("YES");
        else
            printf("NO");
    }
return 0;	
	}