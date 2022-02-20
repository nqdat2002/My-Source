#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int a[21],n,d=0;
void print(){
    d++;
    for (int i = 1; i <= n; i++)
        if (a[i] == 0) cout << '(';
            else cout << ')';
    cout<<'\n';
}
void tinh(int j, int k){
    for (int i =0;i<2;i++){
        if (i==0) k++;
        else k--;
        if (k>n/2||j-k>k) continue;
        a[j] = i;
        if (j == n){
            print();
            return;
        }
        tinh(j+1,k);
    }
}
int main(){
    cin >> n;
    tinh(1,0);
    cout<<d;
    return 0;
}
