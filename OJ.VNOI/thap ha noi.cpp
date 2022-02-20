#include <iostream>
#include <limits.h>
using namespace std;
#define ll unsigned long long
int n,m,test;
ll f[100][100];
void init(){
    for (int i = 1; i <= 64; i++){
        f[i][3] = 1;
        for (int k = 1; k <= i; k++) f[i][3] *= 2;
        f[i][3]--;
        for (int j = 4; j <= 64; j++){
            if (i == j) f[i][j] = i*2+1;
            else if (i < j) f[i][j] = 2*i-1;
            else{
                f[i][j] = LLONG_MAX;
                for (int k = 1; k < i; k++){
                    f[i][j] = min(f[i][j],f[k][j]*2 + f[i-k][j-1]);
                }
            }
        }
    }
}
int main(){
    init();
    while(cin >> n){
		cin >> m;
        cout << f[n][m] << '\n';
   	}
    return 0;
}
