#include <bits/stdc++.h>
const int mod=-1e9;
using namespace std;
int main() {
    int n,res = mod,ans=0,a[100005];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        if (a[i] >= a[i-1]) {
            ans++;
            res = max(res, ans);
        } 
		else ans = 1;
    }
    cout << res;
    return 0;
}
