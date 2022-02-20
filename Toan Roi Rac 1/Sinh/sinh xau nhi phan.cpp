#include<bits/stdc++.h>
using namespace std;
int a[50] = {0}, n;
bool ok = false;
void outp(){
    for(int i = 1; i <= n; i ++) 
        cout << a[i] << " ";
    cout << endl;
}
void sinhkt(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i --;
    }
    if(i == 0) ok = true;
    else a[i] = 1;
}
int main(){
    cin >> n;
    while(!ok){
        outp();
        sinhkt();
    }
    return 0;
}