#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int maxGCDInRange(int L, int R){
    int ans = 1;
    for (int Z = R; Z >= 1; Z--) {
        if ((R / Z) - (L - 1) / Z > 1) {
            ans = Z;
            break;
        }
    }
    return ans;
}
int main(){
    int L,R;
    cin>>L>>R;
    cout << maxGCDInRange(L, R);
    return 0;
}
