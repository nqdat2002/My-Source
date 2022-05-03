#include<iostream>
using namespace std;
int main()
{
int a,b,f[1000005],n;
cin>>a>>b>>n;
f[1]=a;
f[2]=b;
for(int i=3;i<=n;i++)
{
f[i]=f[i-1]+f[i-2];
f[i]%=2021;
}
cout<<f[n];
return 0;
}
