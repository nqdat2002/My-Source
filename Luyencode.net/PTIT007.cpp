#include <iostream>
using namespace std;
bool SoDep(int n){
    while (n % 3 != 2 && n > 0){
        n /= 3;
    }
    return (n == 0);
}
int main(){
    int t, n, ans;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n;
        ans = n;
        while (!SoDep(ans)) ans++;
        cout << ans << "\n";
    }
}
