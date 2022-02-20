#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
const int N = 1e5 + 3;
char s[N];
int dau[200];
bool check(){
    for (int i = 'A'; i <= 'Z'; i++)
        if (!dau[i]) return false;
    return true;
}
int main(){
    scanf("%s",s + 1);
    int n = strlen(s+1);
    int i = 1, j = 1, res = 1e9;
    while (i <= n && j <= n){
        dau[s[j]]++;
        if (check()){
            res = min(res,j-i+1);
            dau[s[i]]--;
            i++;
        }
        else j++;
    }
    if (res > n) res = -1;
    cout << res;
    return 0;
}
