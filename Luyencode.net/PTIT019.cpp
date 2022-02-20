#include <stdio.h>
int main() 
{
    int a,b,c,D;
    scanf("%d%d%d", &a, &b, &c);
    if(a!=b&&a!=c&&b!=c)
	{
	    if(a>b)
		{		D=a;a=b;b=D;}
	    if(a>c)
	    {		D=a;a=c;c=D;}
	  	if(b>c)
	        {	D=b;b=c;c=D;}
	    printf("%d %d %d", c, b, a);
	}
	else if(a==b&&a!=c)
		{
		if(a>c) printf("%d %d %d",b,a,c);
		else printf("%d %d %d",c,a,b);
		}
	else if(a==c&&a!=b)
	{
		if(a>b) printf("%d %d %d",c,a,b);
		else printf("%d %d %d",b,a,c);
	}
	else if(b==c&&b!=a)
	{
		if(b>a) printf("%d %d %d",b,c,a);
		else printf("%d %d %d",a,c,b);
	}
	else if(a==b&&a==c&&b==c)
	printf("%d %d %d",a,b,c);
		
    return 0;
}
