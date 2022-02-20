#include <iostream>
using namespace std;
int Binary_Search(int a[], int l, int r, int x) {
    if (r >= l) {
        int m = l + (r - l) / 2; 
        if (a[m] == x)
            return m;
        if (a[m] > x)
            return Binary_Search(a, l, m - 1, x);
        return Binary_Search(a, m + 1, r, x);
    }
    return -1;
}
int main(){
    int n, k, len, sub;
    int maxlen = -1 ;
    int a[100005];
    int b[100005];
    memset(b, 0, sizeof(b));
    cin >> n;
    a[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i -1] + a[i];
    }
    cin >> k;
    for ( int j = 0; j < n; j++){
        
        sub = Binary_Search(b, 1, n, b[j] + k);
        if(sub != -1){
            len = sub - j;
            if(len > maxlen) 
                maxlen = len;
        }
    }
    cout << maxlen;
    return 0;
}