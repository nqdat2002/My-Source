#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n,k;
const int N = 1e5+5;
int a[N] , dp[N];
int main()
{
   cin >> n >> k;
   for(int i=1;i<=n;++i)
   {
       cin >> a[i];
       dp[i] = -1e9;
   }
   for(int i=1;i<=min(n,k);++i)
   {
       dp[i] = a[i];
   }
   for(int i=1;i<=n;++i)
   {
       for(int cnt=1;cnt<=k && i+cnt <=n;++cnt)
       {
           int j = i+cnt;
           dp[j] = max(dp[j],dp[i]+a[j]);
       }
   }
   int mx = dp[1];
   for(int i=2;i<=n;++i)
   {
       if(mx < dp[i])
       {
           mx = dp[i];
       }
   }
   cout << mx;
}
