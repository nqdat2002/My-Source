#include <bits/stdc++.h>
using namespace std;
int n, x[100];
bool kt(){
	for(int i = 1; i <= n; i ++){
		if(x[1] == 0 || x[n] == 1)
			return false;
		if(x[i] == 1 && x[1 + i] == 1)
			return false;
	}
	return true;
}
void in(){
	for(int i = 1; i <= n; i ++)
		cout << (x[i] == 1 ? "H" : "A");
	cout << endl;
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        x[i] = j;
        if(i == n){
        	if(kt())
        		in();
		}
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
    }
    return 0;
}
