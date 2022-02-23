#include <bits/stdc++.h>
using namespace std;
int n, A[20], B[20];
string str;
void nhap(){
	cin >> str;
	n = str.length();
    for (int i = 0; i <= n; i++)  B[i] = 0;
}
void in() {
    for (int i = 1; i <= n; i++) {
        cout << str[A[i] - 1];
    }
    cout << " ";
}

void Try(int i) {
    int j;
    for (j = 1; j <= n; j++) {
        if (B[j]==0) {
            A[i] = j;
            B[j] = 1;
            if (i == n)
                in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
       nhap();
        Try(1);
        cout << endl;
    }
    return 0;
}
