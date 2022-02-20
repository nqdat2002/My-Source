#include <iostream>
#include <math.h>
#include <map>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
#define FOR(i,a,b) for (int i=a; i <=b; i++)
#define FORD(i,a,b) for (int i=a; i >=b; i--)
const int N=1e6+2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[N];
    cin >> s;
    int len = strlen(s);
    int n=0;
    if (len==1){
        cout << s[0]-'0';
        return 0;
    }
    FOR(i,0,len-1)
        n+=s[i]-'0';
    while(n/10!=0){
        int dig=0;
        while(n){
            dig+=n%10;
            n/=10;
        }
        n=dig;
    }
    cout << n;
 
  }