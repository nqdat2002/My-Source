#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int n, a[100005];
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
}
int ucln(int n1, int n2) {
    if (n2 == 0) return n1;
    return ucln(n2, n1 % n2);
    
}
long long bcnn(int n1, int n2) {
    long long s = n1;
    return s * n2 / ucln(n1, n2);
}
void process() {
    long long b[100005];
    b[0] = a[0]; b[n] = a[n - 1];
    for (int i = 1; i < n; i++) {
        b[i] = bcnn(a[i - 1], a[i]);
    }
    for (int i = 0; i <= n; i++) cout << b[i] << " ";
    cout << endl;
}
int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
