#include<bits/stdc++.h>
using namespace std;
long long tongchuso(long long n)
{
    long long s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    long long n;
    cin>>n;
    if(n%tongchuso(n)==0)cout<<"YES";
    else cout<<"NO";
}
