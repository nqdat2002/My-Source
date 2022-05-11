#include <bits/stdc++.h>
using namespace std;
int n, S, cnt;
int a[15], b[15];
void Solve(){
	int sum = 0;
    for(int i = 1; i <= n; i ++)
        sum += a[i] * b[i];
    if(sum == S){
        cnt++;
        for(int i = 1; i <= n; i ++)
            if(a[i] == 1) cout << b[i] << " ";
        cout << endl;
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n)
            Solve();
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> S;
    cnt = 0;
    for(int i = 1; i <= n; i ++) 
		cin >> b[i];
    Try(1);
    cout << cnt << endl;
    return 0;
}
