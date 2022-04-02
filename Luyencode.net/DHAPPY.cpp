#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; cin>>n;
   ll ans = 0;
   int a[n];
   ll f[n];
   for(int i=0;i<n;i++){
      cin >> a[i];
      if(i>0){
         f[i]=f[i-1]+a[i];
      }
      else f[i]=a[i];
   }
  for(int i=0;i<n-1;i++){
      ans += arr[i]*(f[n-1]-f[i]);
  }
  cout << ans;
   return 0;
}
