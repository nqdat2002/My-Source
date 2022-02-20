#include <bits/stdc++.h>
using namespace std;
int x[100], a[100], c[100];
int n, b, xres[100], res;
bool ok = false;
void inp(){
    cin >> n >> b;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    for(int i = 1; i <= n; i ++) cin >> c[i];
}
bool check(){
    int w = 0;
    for(int i = 1; i <= n; i ++) w += a[i] * x[i];
    if(w > b) return false;
    return true;
}
void Update(){
    int S = 0;
    for(int i = 1; i <= n; i ++) S += x[i] * c[i];
    if(res < S){
        res = S;
        for(int i = 1; i <= n; i ++) 
            xres[i] = x[i];
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        x[i] = j;
        if(i == n){
            if(check()) Update();
        }
        else Try(i + 1);
    }
}
void Next(){
    int i = n;
    while(x[i] == 1){
        x[i] = 0;
        i--;
    }
    if(i == 0) ok = true;
    else x[i] = 1;
}
void outp(){
    cout << res << ".0" << endl;
    for(int i = 1; i <= n; i ++) cout << xres[i] << " ";
    cout << endl;
}
int main(){
    inp();
    while(!ok){
        Next();
        if(check())
            Update();
    }
    outp();
    return 0;
}