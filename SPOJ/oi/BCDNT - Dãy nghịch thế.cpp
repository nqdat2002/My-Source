#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll merge(ll a[], int l, int m, int r){
    vector<ll> x(a + l, a + m + 1);
    vector<ll> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    ll cnt = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[l] = x[i];
            ++ l;
            ++ i;
        }
        else{
            cnt += x.size() - i;
            a[l] = y[j];
            ++ l;
            ++ j;
        }
    }
    while(i < x.size()){
        a[l] = x[i];
        ++ l;
        ++ i;
    }
    while(j < y.size()){
        a[l] = y[j];
        ++ l;
        ++ j;
    }
    return cnt;
}

ll merge_Sort(ll a[], int l, int r){
    ll cnt = 0;
    if(l < r){
        int m = (l + r) / 2;
        cnt += merge_Sort(a, l, m);
        cnt += merge_Sort(a, m + 1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}

int main(){
	int t = 1;
	while(t--){
	    int n; cin >> n;
	    ll a[n + 5];
	    for(int i = 0; i < n; i ++) cin >> a[i];
	    cout << merge_Sort(a, 0, n - 1)<< endl;
	}
    return 0;
}
