#include<stdio.h>
#include<math.h>
int ucln(int a, int b)
{
int u, i,j;
for( i=a;i>0;i--)
{
if(a%i==0)
{
i=i;
for( j=a;j>0;j--)
{
if(b%j==0)
{
j=j;
if(j==i)
{
u=j;
break;
}
}
}
if(j==i)
{
break;
}
}
}
return u;
}
int main()
{
int a,b;
do
{
scanf("%d%d", &a, &b);
}
while (abs(a)>1000||abs(b>1000));
int ta= abs(a);
int tb=abs(b);
if(tb==0||ta==0)
{
if(tb==0)
{
printf("INVALID");
}
else
{
printf("%d",a);
}
}
else
{
int t,m;
if(tb>ta)
{
t=a/ucln(ta,tb);
m=b/ucln(ta,tb);
if(t<0 && m<0)
{
t=-t;
m=-m;
}
printf("%d %d",t,m);
}
else
{
if(ta==tb)
{
printf("%d",a/b);
}
else
{
if(a%b==0)
{
printf("%d",a/b);
}
else
{
t=a/ucln(tb,ta);
m=b/ucln(tb,ta);
if(t<0 && m<0)
{
t=-t;
m=-m;
}
printf("%d %d",t,m);
}
}
}
}
return 0;
}