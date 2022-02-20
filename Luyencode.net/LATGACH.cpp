#include <iostream>
using namespace std;

unsigned long long f[100];
int n,t;

int main(){

    f[0] = f[1] = 1;
    for (int i = 2; i <= 90; i++)
        f[i] = f[i-1] + f[i-2];
    cin >> t;
    while (t--){
        cin >> n;
        cout << f[n] << "\n";
    }
    return 0;
}
