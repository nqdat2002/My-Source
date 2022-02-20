#include<bits/stdc++.h>
using namespace std;
long long a[10000][10000];
long long b[10000][10000];
int inf=(1<<31)-1;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=inf;
            b[i][j]=inf;
        }
        b[i][i]=0;
        a[i][i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        a[x][y]=min(z,a[x][y]);
        a[y][x]=min(z,a[y][x]);
        b[x][y]=min(z,b[x][y]);
        b[y][x]=min(z,b[y][x]);
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                a[i][j]=min(a[i][k]+a[k][j],a[i][j]);
              //  cout<<a[i][j]<<" "<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1+i;j<=n;j++)
        {
            if(b[i][j]!=inf&&a[i][j]!=b[i][j])
            {
                sum++;
                //cout<<i<<" "<<j<<endl;
               // cout<<a[i][j]<<" "<<b[i][j]<<endl;
            }
        }
    }
    cout<<sum<<endl;
   // cout<<b[1][2]<<endl;
    return 0;
}
