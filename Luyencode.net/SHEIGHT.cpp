#include <iostream>
#include <cstring>
using namespace std;

char s[5005];
int bac[5005];

bool dau(char c){
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}
int solve(){

    int n = strlen(s+1);
    int d = 0;
    for (int i = 1; i <= n; i++){
        if (dau(s[i])){
            bac[d-1] = max(bac[d-1],bac[d]) + 1;
            bac[d] = 0;
            --d;
        }
        else ++d;
    }
    return bac[1];
}
int main(){

    int t;
    scanf("%d",&t);
    while (t--){
        scanf("%s", s + 1);
        fill(bac,bac+5005,0);
        cout << solve() << "\n";
    }
    return 0;
}
