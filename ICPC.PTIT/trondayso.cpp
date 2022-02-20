#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
using namespace std;

int n, m;
long long f[202][202];
void pa() {
    f[0][0] = 1;
    for (int i = 1; i <= 200; i++) {
        for (int j = 0; j <=i; j++) {
            if (j == 0 || j == i) f[i][j] = 1;
            else {
                f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % mod;
            }
        }
    }

}
void init() {
    cin >> n >> m;
}
void process() {
    cout << f[m+n][n] << endl;
}
int main() {
    pa();
    faster;
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
