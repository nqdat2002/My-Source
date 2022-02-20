#include<bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int c[50], n , k;
bool ok = false;
void Init(){
    cin >> k >> n;
    for(int i = 1; i <= k; i ++) c[i] = i;
}
void Next(){
    int i = k;
    while(c[i] == n - k + i)
        i --;
    if(i == 0) 
        ok = true;
    else{
        c[i] ++;
        for(int j = i + 1; j <= k; j ++)
            c[j] = c[i] + j - i;  
    }
}
void Outp(){
    for(int i = 1; i <= k; i ++)
        cout << c[i] << " ";
    cout << endl;
}
int main(){
    Init();
    if(n == 1 && k == 1) cout << 1;
    else{
        while(!ok){
            Outp();
            Next();
        }
    }
    return 0;
}