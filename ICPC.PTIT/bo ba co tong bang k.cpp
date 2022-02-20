// submit by Nguyen Hoang Phuc
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int n, k, a[100005];
void init() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    
}
bool binarySearch(int a[100005], int l, int r, int num) {
    if (l > r) return false;
    int mid = (l + r) / 2;
    if (a[mid] == num) return true;
    if (a[mid] > num) return binarySearch(a, l, mid - 1, num);
    return binarySearch(a, mid + 1, r, num);
}
void process() {
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (binarySearch(a, j + 1, n - 1, k - a[i] - a[j])) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int t; cin >> t;
    while (t--) {
        init();
        process();
    }
    

}
