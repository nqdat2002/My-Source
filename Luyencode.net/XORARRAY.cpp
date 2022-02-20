#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
vector<pair<int,int> > v[100005];
int arr[100005],a[100005];
vector<int> s;
bool b[(1<<20)];
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for (int i=0;i<q;i++)
    {
        int l,x;
        scanf("%d%d",&l,&x);
        v[l-1].push_back({x,i});
    }
    s.push_back(0);
    b[0]=1;
    int ans=1;
    for (int i=0;i<n;i++)
    {
        if (b[arr[i]])
        ans=(ans*2)%mod;
        else
        {
            int tmp=s.size();
            for (int x=0;x<tmp;x++)
            {
                s.push_back(s[x]^arr[i]);
                b[s.back()]=1;
            }
        }
        for (int x=0;x<v[i].size();x++)
        a[v[i][x].second]=ans*b[v[i][x].first];
    }
    for (int i=0;i<q;i++)
    printf("%d\n",a[i]);
}
