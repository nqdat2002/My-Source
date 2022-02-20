#include <bits/stdc++.h>
using namespace std;
int n, x[100];
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> x[i];
}
void Next(){
    int i = n - 1;
    while(i > 0 && x[i] > x[i + 1]) i--;
    if(i > 0){
        int j = n;
        while(x[i] > x[j]) j--;
        swap(x[i], x[j]);
        int d = i + 1, c = n;
        while(d <= c){
            swap(x[d], x[c]);
            d ++; c --;
        }
    }
    else
        for(int i = 1; i <= n; i ++) x[i] = i;
}
void outp(){
    for(int i = 1; i <= n; i ++) cout << x[i] << " ";
    cout << endl;
}
int main(){
    int test = 5;
    inp();
    while(test--){
        Next();
        outp();
    }
    return 0;
}