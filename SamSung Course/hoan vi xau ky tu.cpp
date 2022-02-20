#include <bits/stdc++.h>
using namespace std;
int n, a[30], b[30];
string str;
void inp(){
	cin >> str;
	n = str.size();
    for (int i = 0; i <= str.size(); i++)  
		b[i] = 0;
}
void outp() {
    for (int i = 1; i <= n; i++) 
        cout << str[a[i] - 1];
    cout << " ";
}
void Try(int i) {
    int j;
    for (j = 1; j <= n; j++) {
        if (b[j]==0) {
            a[i] = j;
            b[j] = 1;
            if (i == n) outp();
            else Try(i+1);
            b[j] = 0;
        }
    }
}
int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
       	inp();
        Try(1);
        cout << endl;
    }
    return 0;
}
