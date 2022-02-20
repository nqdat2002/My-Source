#include<stdio.h>
#include<math.h>
int main()
    //locluyencode
{ int n;
do
{ scanf("%d",&n); }
while(n>abs(10000));
int a[n],b[10000],d1=-1;
for(int i=0;i<n;i++)
{ do
{ scanf("%d",&a[i]); }
while(a[i]>abs(100000000));
int d=0;
for(int j=1;j<=100;j++)
{ if(a[i]%j==0)
{ d++;
if(d>2)
{ break; } } }
if(d==2)
{ d1++; b[d1]=a[i]; } }
int t;
for(int i=0;i<=d1;i++)
{ for(int j=i+1;j<=d1;j++)
{ if(b[j]<b[i])
{ t=b[i]; b[i]=b[j]; b[j]=t; } } }
for(int i=0;i<=d1;i++)
{ if(i==0)
{ printf("%d ",b[i]); }
else { if(b[i]>b[i-1])
{printf("%d ",b[i]); }} }
return 0;}