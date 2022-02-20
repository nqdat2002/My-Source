#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int n, k, a[100] = {0};
bool ok = false;
bool ktra(vector<int> a, int n, int m) {
    int mark = 0;
    for(int i = 0; i < n; i++) {
        int cnt1 = 0;
        if(a[i] == 1) {
            for(int j = i; j < m + i && j < n; j ++)
                if(a[i] == a[j]) 
                    cnt1++;
        }
        if(cnt1 == m) 
                mark ++;
    }
    if(mark == 1) 
        return true;
    return false;
}
void outp(){
    vector<int> c;
    for(int i = 1; i <= n; i ++)
        c.push_back(a[i]);
    if(ktra(c, n, k)){
        for(int i = 0; i < n; i ++)
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
    FileIO();
    cin >> k >> n;
    while(!ok){
        outp();
        sinhkt();
    }
    return 0;
}