#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(n<1||n>100000||m<1||m>100000) return 0;
    if(n%2==0&&m%2==0) cout<<"NO";
    else
    {
        int k=1e6;
        if(n%2)k=min(k,n);
        if(m%2)k=min(k,m);
        cout<<"YES  "<<2*k+1;
    }
    
}
