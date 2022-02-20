#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
string s[] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
string a;
int main(){
    cin >> a;
    int n = a.length();
    for(int i = 0; i <= 9; i++){
        int t = 0;
        for(int j = 0; j < n; j++){
            if (s[i][t] == a[j]) t++;
            if (t==s[i].length()){
                cout << s[i];
                return 0;
            }
        }
    }
    cout << "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!";
    return 0;
}
