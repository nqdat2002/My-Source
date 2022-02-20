#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
// Sinh
int n;
bool ok = false;
long c[25][25], x[100], s = 0, res = 1e7, xres[100];
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i ++) x[i] = i;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> c[i][j];
        }
    }
}
void Next(){
    int i = n - 1;
    while(x[i] > x[i + 1])
        i--;
    if(i == 0) ok = true;
    else{
        int j = n;
        while(x[j] < x[i]) j--;
        swap(x[i], x[j]);
        int d = i + 1, c = n;
        while(d < c){
            swap(x[d], x[c]);
            d++; c--;
        }
    }
}
int main(){
    FileIO();
    inp();
    while(!ok){
        Next();
        for(int i = 1; i < n; i ++)
            s += c[x[i]][x[i + 1]];
        if(s + c[x[n]][x[1]] < res){
            res = s + c[x[n]][x[1]];
            for(int i = 1; i <= n; i ++)
                xres[i] = x[i];
        }
    }
    cout << res << ".0" << endl;
    for(int i = 1; i <= n; i ++)
        cout << xres[i] << " ";
    cout << 1 << endl;
    return 0;
}







