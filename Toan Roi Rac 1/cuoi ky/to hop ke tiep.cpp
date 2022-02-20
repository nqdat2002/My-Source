#include <bits/stdc++.h>
using namespace std;
int n, k, c[100];
void inp(){
    cout << "NHAP N, K:" << endl;
    cin >> n >> k;
    cout << "Nhap cau hinh hien tai gom K phan tu:" << endl;
    for(int i = 1; i <= k; i ++) cin >> c[i];
    cout << endl;
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
    int ts;
    cout << "Nhap so luong cau hinh yeu cau:" << endl; cin >> ts;
    inp();
    for(int i = 0; i < ts; i ++){
        cout << "To hop thu " << i + 1  << ":" << endl;
        Next();
        outp();
        cout << endl;
    }
    return 0;
}