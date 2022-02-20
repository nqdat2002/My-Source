#include<stdio.h>
#include<math.h>
int main()
	{
    int n;
	double s=0;
	do 
    { 
        scanf("%d",&n); }
	while(n>1000000|| n<1);
	for(double i=1;i<=n;i++)
    {
	double t;
	t=1/(i*(i+1));
	s+=t; 
    }
	printf("%.5lf",s);
return 0;
}