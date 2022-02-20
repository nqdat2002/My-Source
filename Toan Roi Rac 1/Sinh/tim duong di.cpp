#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int a[50] = {0}, n, m, s;
bool ok = false;
void outp(){
    int cnt = 0;
    for(int l = 1; l <= s; l ++)
        if(a[l] == 1) 
            cnt += 1;
    if(cnt == n){
        for(int l = 1; l <= s; l ++){
            if(a[l] == 0)
                cout << "H" << " ";
            else 
                cout << "V" << " ";
        }
        cout << endl;
    }
}
void sinhkt(){
    int i = s;
    while(a[i] == 1){
        a[i] = 0;
        i --;
    }
    if(i == 0) ok = true;
    else a[i] = 1;
}
int main(){
    cin >> n >> m;
    s = m + n;
    while(!ok){
        outp();
        sinhkt();
    }
    return 0;
}