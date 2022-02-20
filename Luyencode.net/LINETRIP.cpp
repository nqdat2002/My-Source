#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int n, a[MAXN];
int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    int minz=0,maxz=0;
    for(int i=0;i<n;i++) {
        minz = min(minz,a[i]);
        maxz = max(maxz,a[i]);
    }
    int res = (maxz - minz)*2;
    printf("%d", res);
    return 0;
}
