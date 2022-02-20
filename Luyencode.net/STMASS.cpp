#include <iostream>
#include <cstring>
#include <stack>
#define ll long long
using namespace std;

char s[1001];
int t,n;

void solve(){

    int C[1005],H[1005],O[1005];
    int cnt = 0, hs = 1;
    C[cnt] = H[cnt] = O[cnt] = 0;

    for (int i = 1; i <= n; i++){
        if (s[i] > '0' && s[i] <= '9') continue;
        if (s[i] == '('){
            cnt++;
            C[cnt] = H[cnt] = O[cnt] = 0;
        }
        else if (s[i] == ')'){
            if (s[i+1] > '0' && s[i+1] <= '9') hs = s[i+1] - '0';
            cnt--;
            C[cnt] += C[cnt+1]*hs;
            H[cnt] += H[cnt+1]*hs;
            O[cnt] += O[cnt+1]*hs;
        }
        else{
            if (s[i+1] > '0' && s[i+1] <= '9') hs = s[i+1] - '0';
                else hs = 1;
            if (s[i] == 'C') C[cnt] += hs;
                else if(s[i] == 'H') H[cnt] += hs;
                    else O[cnt] += hs;
        }
    }
    cout << C[cnt]*12+H[cnt]+O[cnt]*16 << "\n";
}
int main(){

    scanf("%d",&t);
    while (t--){
        scanf("%s",s + 1);
        n = strlen(s+1);
        solve();
    }
    return 0;
}
