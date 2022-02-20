#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,x=-1,p;
    cin>>n>>m;
    int a[n*m+1];
    for(i=1;i<=n*m;i++){
            cin>>p;
        int t=sqrt(p);
            if(t*t==p){
                x++;
                a[x]=p;
           }
    }
    sort(a,a+x+1);
    for(long i=0;i<=x;i++){
        if(a[i]!=a[i-1])cout<<a[i]<<" ";
    }
    if(x==-1)cout<<"NOT FOUND";
}