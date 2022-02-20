#include <bits/stdc++.h>
using namespace std;
map<int,int> pos;
int main(){
    int a[100005],b,i,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=n;i>=1;i--)
    {
        pos[a[i]]=i;
    }
    while(m--)
    {
        cin>>b;
        cout<<pos[b]<<' ';
    }
    return 0;
}

