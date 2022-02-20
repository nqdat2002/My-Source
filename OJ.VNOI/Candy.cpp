#include <iostream>
using namespace std;

int n,m,cnt;

void dq(int j,int last,int s){

    if (s < last) return;
    if (j == n && last <= s) cnt++;
    for (int i = last; i <= s; i++){
        dq(j+1,i,s-i);
    }
}
int main(){

    cin >> n >> m;
    dq(1,1,m);
    cout << cnt << '\n';
    for (int i = 1; i <= n; i++){
        if (i <= m % n) cout << m/n + 1;
        else cout << m/n;
        cout << ' ';
    }
    return 0;
}
