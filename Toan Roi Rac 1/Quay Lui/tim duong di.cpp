#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int a[100], s, n, m;
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
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == s) outp();
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> m;
    s = m + n;
    Try(1);
    return 0;
}