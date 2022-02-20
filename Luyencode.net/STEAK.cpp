#include <bits/stdc++.h>
using namespace std;
int main(){
    int Test;
    cin >> Test;
    char a[5];
    int demH = 0, demT = 0, demT1 = 0, demH1 = 0; 
    while (Test--){
        cin >> a;
        if (a[0] == 'H'){
            demH++;
            demT = 0;
            if (demH > demH1) demH1 = demH;
        }
        else{
            demT++;
            demH = 0;
            if (demT > demT1) demT1 = demT;
        }
    }
    cout << demH1 <<' '<< demT1 << endl;
    return 0;
}
