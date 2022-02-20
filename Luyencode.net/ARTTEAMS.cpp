#include <iostream>
#include <algorithm>
using namespace std;

int a[100005],n;

int main(){

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int ans = 1e9;
    for (int i = 0; i < n-4; i++){
        ans = min(a[i+4]-a[i],ans);
    }
    cout << ans;
    return 0;
}
