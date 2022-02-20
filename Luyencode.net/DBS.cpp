#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[1005];
int main(){
    f[0] = f[1] = 0; f[2] = 1;
    for(int i = 3; i <= 101; i ++){
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
    ll n;
    while(cin >> n){
        for(int i = 0; i <= 101; i ++){
            if(f[i] >= n){
                cout << f[i] << endl;
            	break;
            }
         }
    }
    return 0;
}