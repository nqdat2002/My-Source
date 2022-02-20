#include <iostream>
#include <queue>
#define ll long long
using namespace std;

typedef pair <ll,int> ii;
const int N = 1e5 + 3;
int n,k;
ll f[N], a[N];

int main(){

    scanf("%d%d",&n,&k);
    for (int i = 1; i <= n; i++){
        scanf("%lld",&a[i]);
        a[0] += a[i];
    }
    priority_queue <ii, vector<ii>, greater<ii>> p;
    p.push({0,0});
    for (int i = 1; i <= n; i++){
        while (!p.empty() && p.top().second < i-k-1) p.pop();
        f[i] = p.top().first + a[i];
        p.push({f[i],i});
    }
    ll res = 1e15;
    for (int i = n; i >= n-k; i--)
        res = min(res,f[i]);
    cout << a[0] - res;
    return 0;
}
