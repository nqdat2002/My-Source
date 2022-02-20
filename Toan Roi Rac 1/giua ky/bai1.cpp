#include <bits/stdc++.h>
using namespace std;
vector<string> a = {
    "FFFF", "FFFT", "FFTF", "FFTT",
    "FTFF", "FTFT", "FTTF", "FTTT",
    "TFFF", "TFFT", "TFTF", "TFTT",
    "TTFF", "TTFT", "TTTF", "TTTT"
};
char pd(char a){
    return(a == 'T' ? 'F' : 'T');
}
char hoac(char a, char b){
    if(a == 'F' && b == 'F') return 'F';
    return 'T';
}
char va(char a, char b){
    if(a == 'T' && b == 'T') return 'T';
    return 'F';
}
char suyra(char a, char b){
    if(a == 'T' && b == 'F') return 'F';
    return 'T';
}
char tuongduong(char a, char b){
    if(a == 'F' && b == 'F' || a == 'T' && b == 'T') return 'T';
    return 'F';
}
int main(){
    int len = a.size();
    for(int i = 0; i < len; i ++){
        char x, y, z, t;
        x = a[i][0]; y = a[i][1]; z = a[i][2]; t = a[i][3];
        char p = suyra(x, y);
        char q = tuongduong(z,t);
        char r = pd(x);
        cout << hoac(va(p, q), r) << endl;
    }
    return 0;
}