#include <bits/stdc++.h>
using namespace std;
int n, x[100];
void in(){
	for(int i = 1; i <= n; i ++)
		cout << char(x[i] + 65);
	cout << " ";
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        x[i] = j;
        if(i == n)
            in();
        else Try(i + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(x, 0, sizeof(x));
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}
