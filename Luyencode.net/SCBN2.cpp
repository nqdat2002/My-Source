#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i;
	map <int, int> cnt;
	long long res = 0;
    cin >> n;
    for (i=1; i<=n; i++) {
        cin >> k;
        cnt[k]++;
    }
    for (auto x: cnt) res += 1LL * x.second * (x.second - 1) / 2;
    cout << res;
}