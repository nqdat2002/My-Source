#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string res = "hello";
    int idx = 0;
    for(int i = 0; i < (int)s.length(); ++i){
        if(s[i] == res[idx]){
            idx++;
            if(idx == 5){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
