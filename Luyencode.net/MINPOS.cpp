#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 1e6 + 3;
pair <int,int> a[N];
int minpos[N];
int n,q,k;
int Find(int x){

    int l = 1, r = n;
    while (l < r){
        int m = (l+r) >> 1;
        if (a[m].first > x) l = m+1;
            else r = m;
    }
    return l;
}
int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>k;
        a[i] = {k,i};
    }
    sort(a+1,a+n+1,greater<pair <int,int>>());

    minpos[n] = a[n].second;
    for (int i = n-1; i > 0; i--)
        minpos[i] = min(minpos[i+1],a[i].second);
    cin>>q;
    while (q--){
        cin>>k;
        int p = Find(k);
        cout << minpos[p] << "\n";
    }
    return 0;
}
