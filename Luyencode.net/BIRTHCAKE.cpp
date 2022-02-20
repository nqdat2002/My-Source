#include <iostream>
#include <queue>
#define ll long long
using namespace std;
const int N = 1e5 + 3;
int n,res;
ll x,t,T;
int main(){
    priority_queue <ll> p;
    ll sum = 0;
    cin>>n>>T;
    for (int i = 1; i <= n; i++){
        cin>>x>>t;
        p.push(t);
        sum += t;
        while (!p.empty() && sum > T-x){
            sum -= p.top();
            p.pop();
        }
        res = max(res,(int)p.size());
    }
    cout << res;
    return 0;
}
