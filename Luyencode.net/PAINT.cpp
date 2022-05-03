#include<bits/stdc++.h>
using namespace std;
#define ll long long
char a[1000],b[1000001],d[1000001];
int c[1000001];
void create_char(){
    a[int('a')]='a';
    for(int i=int('b');i<=int('z');++i){
        a[i]=a[i-1]+1;  
    }
}
int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    create_char();
    cin>>t;
    for(int i=1;i<=t;++i){
        cin>>c[i];
        if(c[i]==1) cin>>d[i];
        if(c[i]==2) cin>>d[i]>>b[i];
    }
    string s;
    for(int i=t;i>=1;--i){
        if(c[i]==1) s+=a[int(d[i])];
        else{
            a[int(d[i])]=a[int(b[i])];
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
