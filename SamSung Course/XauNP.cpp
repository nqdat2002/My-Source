#include<iostream>
using namespace std;
bool OK = false;
int B[30] = {0}, n;
int a[100];
void in(){
    for(int i = 1; i <= n; i++) 
		cout << a[i] << " ";
    cout << endl;
}
void sinhkt(){
    int i = n;
    while(B[i]){
        B[i] = 0;
        i--;
    }
    if(i == 0) OK = true;
    else B[i] = 1;
}
main(){
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    while(!OK){
        in();
        sinhkt();
    }
}
