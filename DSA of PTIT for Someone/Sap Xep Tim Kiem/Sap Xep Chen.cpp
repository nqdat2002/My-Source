#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void in(int a[], int n){
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
}
void sapxep3(int a[], int n){
    int i,j,x;
    cout << "Buoc 0: " << a[0] << endl;
    for(i=1;i<n;i++){
        x = a[i]; j = i-1;
        while(j>=0 && a[j]>x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
        cout << "Buoc " << i << ": ";
        in(a,i+1);
    }
}
main(){
    int a[100], n;
    cin >> n;
    nhap(a,n);
    sapxep3(a,n);
}
