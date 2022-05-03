#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int s[2000000];
    for (int i=0; i<=n*2; i++) s[i]=0;
    for (int i=1; i<n*2; i++)
    if (i<=n) {
        s[i]+=i;
        s[i+1]+=s[i]/10;
        s[i]%=10;
    } else {
        s[i]+=(n-(i-n));
        s[i+1]+=s[i]/10;
        s[i]%=10;
    }
    for (int i=n*2-1; i>=1; i--) cout<<s[i];
    cout<<"\n";
    
}
