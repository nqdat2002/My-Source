#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10000005], b[10000005];
int main(){
    int n, cnt1 = 0, cnt2 = 0, Sum1 = 0, Sum2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        Sum1 += a[i];
        if(a[i] != 0) cnt1 ++;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        Sum2 += b[i];
        if(b[i] != 0) cnt2 ++;
    }
    if (cnt1 != cnt2) cout << (cnt1 > cnt2 ? 1 : 2 );
    else{
        if (Sum1 == Sum2)
            cout << "Double Win";
        else
            cout << (Sum1 < Sum2 ? 1 : 2);
    }
    cout << endl;
    return 0;
}