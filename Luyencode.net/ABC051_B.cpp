#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int k,s;
    cin>>k>>s;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            a[5000+i+j]++;
        }
    }
    int sum=0;
    for(int i=0;i<=k;i++)
    {
        int pos=s-i;
        if(pos<0)
        {
            continue;
        }
        sum+=a[5000+pos];
    }
    cout<<sum<<endl;
    return 0;
}
