#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum;
    cin>>n;
    while(n>9)
    {
        sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        n=sum;
    }
    cout<<n;
}
