#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
const int N = 1e6 + 3;
const int base = 37;
const ll mod = 1e9 + 3;
char s[N],t[N];
ll h[N], ht, pw[N];
ll get(int i,int j){

    return (h[j] - h[i-1]*pw[j-i+1] + mod*mod) % mod;
}
int main(){
    cin>>s+1>>t+1;
    int n = strlen(s+1);
    int m = strlen(t+1);
    pw[0] = 1;
    for (int i = 1; i <= n; i++){
        pw[i] = pw[i-1] * base % mod;
        h[i] = (h[i-1]*base + s[i] - 'a' + 1) % mod;
    }
    for (int i = 1; i <= m; i++)
        ht = (ht*base + t[i] - 'a' + 1) % mod;

    for (int i = 1; i <= n-m+1; i++){
        if (ht == get(i,i+m-1)) cout << i << " ";
    }
    return 0;
}
