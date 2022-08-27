#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct Bracket{
    Bracket();
    Bracket(int left,int right);
    ~Bracket(){};
    int left;
    int right;
    friend Bracket operator+(const Bracket &a, const Bracket &b);
};
Bracket::Bracket(){
    left=right=0;
}
Bracket operator+(const Bracket &a, const Bracket &b){
    Bracket c;
    int res=min(a.left,b.right);
    c.left=a.left+b.left-res;
    c.right=a.right+b.right-res;
    return c;
}
Bracket::Bracket(int left,int right){
    this->left=left;
    this->right=right;
}
void create_tree(Bracket B[],int i,char a[], int l, int r){
    if(l==r){
        if(a[l]=='(')
            B[i]=Bracket(1,0);
        else
            B[i]=Bracket(0,1);
        return;
    }
    int mid=(l+r)/2;
    create_tree(B,i*2,a,l,mid);
    create_tree(B,i*2+1,a,mid+1,r);
    B[i]=B[i*2]+B[i*2+1];
}

void update(Bracket B[],int i,int x, int l, int r){
    if(l==r&&l==x){
        if(B[i].left)
            B[i]=Bracket(0,1);
        else
            B[i]=Bracket(1,0);
        return;
    }
    int mid=(l+r)/2;
    if(x<=mid)
        update(B,i*2,x,l,mid);
    else
        update(B,i*2+1,x,mid+1,r);
    B[i]=B[i*2]+B[i*2+1];
}

Bracket get(Bracket B[],int i,int u,int v, int l, int r){
    if(u>r||l>v)
        return Bracket(0,0);
    else if(l>=u&&v>=r)
        return B[i];
    int mid=(l+r)/2;
    return get(B,i*2,u,v,l,mid)+get(B,i*2+1,u,v,mid+1,r);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Bracket B[4*100001];
    int n,m;
    cin>>n>>m;
    char a[100001];
    for(int i=1;i<=n;++i)
        cin>>a[i];
    create_tree(B,1,a,1,n);
    while(m--){
        int k;
        cin>>k;
        if(k){
            int u,v;
            cin>>u>>v;
            Bracket temp=get(B,1,u,v,1,n);
            cout<<(temp.left==0&&temp.right==0);
        }
        else{
            int x;
            cin>>x;
            update(B,1,x,1,n);
        }
        
    }
}
