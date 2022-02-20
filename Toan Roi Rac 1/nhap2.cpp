#include <bits/stdc++.h>
using namespace std;
int a[100] = {0}, n, m, k;
bool ok = false;
bool check(vector<int> &c, int n, int k, int m) {
    int x = 0, y = 0;
    for (int i = 0; i < n; i ++) {
        int cnt1 = 0;
        if (c[i] == 0) {
            for (int j = i; j < k + i && j < n; j ++)
                if (c[i] == c[j]) cnt1 ++;
            
            if (cnt1 == k) 
                x ++;
        }
        int cnt2 = 0;
        if (c[i] == 1) {
            for (int j = i; j < m + i && j < n; j ++)
                if (c[i] == c[j]) cnt2 ++;
            if (cnt2 == m) 
                y ++;
        }
    }
    if (x == 1 && y == 1)
        return true;
    return false;
}
void outp(){
    vector<int> c;
    for(int i = 1; i <= n; i ++)
        c.push_back(a[i]);
    if(check(c, n, k, m)){
        for(int i = 0; i < n; i ++)
            cout << c[i] << " ";
        cout << endl;
    }
}
void next(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i --;
    }
    if(i == 0) ok = true;
    else a[i] = 1;
}
int main(){
    cin >> k >> m >> n;
    while(!ok){
        outp();
        next();
    }
    return 0;
}