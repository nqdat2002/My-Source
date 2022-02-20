#include <iostream>
#define ll long long
using namespace std;

const int N = 1e6 + 3;
int st[N*4];
int n,q,a[N];

void build(int id,int l,int r){

    if (l == r){
        st[id] = a[l];
        return;
    }
    int m = (l+r) >> 1;
    build(id*2,l,m);
    build(id*2+1,m+1,r);
    st[id] = min(st[id*2], st[id*2+1]);
}

ll get(int id,int l,int r,int x,int y){

    if (y < l || x > r) return 1e9;
    if (x <= l && r <= y) return st[id];
    int m = (l + r) >> 1;
    return min(get(id*2,l,m,x,y), get(id*2+1,m+1,r,x,y));
}

int main(){

    scanf("%d%d",&n,&q);
    int x,y;
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }
    build(1,1,n);
    while (q--){
        scanf("%d%d",&x,&y);
        cout << get(1,1,n,x,y) << " ";
    }
    return 0;
}
