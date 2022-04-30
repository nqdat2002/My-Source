#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, a[300000], cnt[2][1048579];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll ans = 0;
    int x = 0;
    cnt[1][0] = 1;
    for (int i = 0; i < n; ++i){
        x ^= a[i];
        ans += cnt[i % 2][x];
        cnt[i % 2][x]++;
    }
    cout << ans << endl;
}
