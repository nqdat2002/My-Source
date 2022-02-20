#include<bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int a[1000] = {0}, b[1000], S, n, k;
bool ok = false;
void inp(){
    cin >> S >> n;
    for(int i = 1; i <= n; i ++) cin >> b[i];
}
void outp(){
    vector<int> c;
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(a[i] == 1){
            c.push_back(b[i]);
            sum += b[i];
        }
    }
    if(sum == S){
        int len = c.size();
        for(int i = 0; i < len; i ++)
            cout << c[i] << " ";
        cout << endl;
    }
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
    inp();
    while(!ok){
        outp();
        sinhkt();
    }
    return 0;
}