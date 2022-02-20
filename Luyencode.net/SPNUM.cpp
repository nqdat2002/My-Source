#include<iostream>
#include<math.h>
using namespace std;
const long long mod = 1e9+7;
long long ans(long long n, long long k, long long sum, int i){
    if(sum >= n)
		return sum;
    if(pow(k, i) >= n) 
		return pow(k, i);
		
    return min(ans(n, k, sum, i+1), ans(n, k, sum + pow(k, i), i + 1));
}
int main(){
    long long n, k;
    cin >> n >> k;
    cout << ans(n, k, 0, 0) % mod;
    return 0;
}
