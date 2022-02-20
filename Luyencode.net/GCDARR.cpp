#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int n;
int a[100005];
int f[100005];
int d[100005];
vector<int> A[100005];
void pre(){
    f[1]=1;
    for (int i=2;i<=100000;++i)
        if (f[i]==0){
            for (int j=1;i*j<=100000;++j) f[i*j]=i;
        }
}
void detach(int i){
    int tmp=a[i];
    while (tmp>1){
        int t=f[tmp];
        A[i].push_back(t);
        while (t==f[tmp]) tmp/=f[tmp];
    }
}
int main(){
    pre();
    cin>>n;
    for (int i=1;i<=n;++i) cin>>a[i];
    for (int i=1;i<=n;++i){
        detach(i);
    }
    int res=n+1;
    int point=0;
    int l,r;
    for (int i=1;i<=n;++i){
        if (i==1){
            for (int v:A[i]) d[v]=1;
        }
        else{
            int len=0;
            for (auto v:A[i]){
                bool kt=false;
                for (auto u:A[i-1]) if (u==v) kt=true;
                if (kt) d[v]++;
                else d[v]=1;
                len=max(len,d[v]); 
            }
            point=max(point,i-len);
            if (point!=0){
                if (i-point+1<res){
                    res=i-point+1;
                    l=i-point+1;
                    r=point;
                }
            } 
        }
    }
    if (res!=n+1)
    cout << res <<' ' << r << ' ' << r+res-1 << '\n';
    else cout <<-1 << '\n';
}
