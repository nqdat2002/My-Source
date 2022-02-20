#include <bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define maxn 1000000
#define ll  long long
using namespace std;
int f[maxn+2],s[maxn+2],k,q;
int dem[maxn+2],t,a,b;
ll res;
void sieve(){
    memset(f,0,sizeof(f));
    fo(i,2,trunc(sqrt(maxn)))
        if (f[i]==0)
            fo(j,i,maxn/i)
                if (f[i*j]==0)
                    f[i*j]=i;
    fo(i,2,maxn)
        if (f[i]==0) f[i]=i;
    fo(i,2,maxn)
    {
        s[i]=1;
        k=i;q=0;
        while (f[k]!=0)
        {
            if (f[k]!=q)
            {
                s[i]*=f[k];
                q=f[k];
            }
            k/=f[k];
        }
    }
}
void solve()
{
    sieve();
    cin>>a>>b;
    memset(dem,0,sizeof(dem));
    fo(i,a,b) dem[s[i]]++;
    res=0;
    fo(i,2,maxn)
        res+=((dem[i]*(dem[i]-1))/2);
    cout<<res<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
