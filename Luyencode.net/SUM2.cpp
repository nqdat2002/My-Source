#include<stdio.h>
#include<math.h>
int main()
{
int n;
long s=0;
do { scanf("%li",&n); }
while(n>1000000|| n<1);
for(int i=1;i<=n;i++) {
long t=i;
t*=i;
s+=t; }
printf("%li",s);
return 0;}