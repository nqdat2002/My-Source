// submit by Nguyen Hoang Phuc
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int a, b, c, k;
void init() {
    cin >> a >> b >> c >> k;
}
void process() {
    int ans = 0;
    ans = min(a, k - 1) + min(b, k - 1) + min(c, k - 1) + 1;
    cout << ans << endl;
}
int main() {
    faster;
    int t=1;
//   cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
