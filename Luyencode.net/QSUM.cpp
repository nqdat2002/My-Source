#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
const int N = 1e5 + 3;
ll st[N*4];
int n,q;
void update(int id,int l,int r,int pos,int val){

    if (l > pos || r < pos) return;
    if (l == r){
        st[id] += val;
        return;
    }
    int m = (l+r) >> 1;
    update(id*2,l,m,pos,val);
    update(id*2+1,m+1,r,pos,val);
    st[id] = st[id*2] + st[id*2+1];
}
ll get(int id,int l,int r,int x,int y){
    if (y < l || x > r) return 0;
    if (x <= l && r <= y) return st[id];
    int m = (l + r) >> 1;
    return get(id*2,l,m,x,y) + get(id*2+1,m+1,r,x,y);
}
int main(){
    cin >> n >> q;
    int x,y,z;
    for (int i = 1; i <= n; i++){
        cin >> x;
        update(1,1,n,i,x);
    }
    while (q--){
        cin >> x >> y >> z;
        if (x == 1) update(1,1,n,y,z);
            else cout << get(1,1,n,y,z) << " ";
    }
    return 0;
}
