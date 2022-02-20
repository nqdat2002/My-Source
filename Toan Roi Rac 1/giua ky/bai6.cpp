#include <bits/stdc++.h>
using namespace std;
int n, k, c[100];
void inp(){
    cin >> k >> n;
    for(int i = 1; i <= k; i ++) cin >> c[i];
}
void Next(){
    int i = k;
    while(i > 0 && c[i] == n - k + i) i --;
    if(i > 0){
        c[i] ++;
        for(int j = i + 1; j <= k; j ++)
            c[j] = c[i] + j - i;
    }
    else 
        for(int j = 1; j <= k; j ++ ) c[j] = j;
}
void outp(){
    for(int i = 1; i <= k; i ++) 
        cout << c[i] << " ";
    cout << endl;
}
int main(){
    int test = 4;
    inp();
    while(test --){
        Next();
        outp();
    }
    return 0;
}