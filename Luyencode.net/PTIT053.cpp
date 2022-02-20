#include<stdio.h>
#include<stdbool.h>
int tongchuso(int n)
{   
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
bool prime(int n)
{
    int i;
    if(n<2)return false;
    if(n<4)return true;
    if(n%2==0 || n%3==0)return false;
    for(i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}
int main()
{
    int sum,i,l,r,ans=0;
    scanf("%d%d",&l,&r);
    for(i=l+1;i<=r;i++)
    {
        sum=tongchuso(i);
        if(prime(sum)==true)ans++;
    }
    printf("%d",ans);
}
