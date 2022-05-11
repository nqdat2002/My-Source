#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void in(int a[], int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
void sapxep4(int a[], int n){
    int i,j,t,ok;
    for(i=0;i<n;i++){
        ok = true;
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                ok = false;
                swap(a[j], a[j + 1]);
            }
        }
        if(ok) break;
        cout << "Buoc " << (i+1) << ": ";
        in(a,n);
    }
}
main(){
    int a[100], n;
    cin >> n;
    nhap(a,n);
    sapxep4(a,n);
}
