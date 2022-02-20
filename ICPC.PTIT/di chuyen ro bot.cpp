#include <bits/stdc++.h>
using namespace std;
void Solve(string str, int x, int y){
    for(int i = 0; i < str.size(); i ++){
        if(str[i] == 'G') {
            y = y + 1;
            x = x + 0;
            }
        else if(str[i] == 'L'){
            x = x - 1;
            y = y + 0;
        }
        else if(str[i] == 'R'){
            x = x + 1;
            y = y + 0;
        }
        else{
            x = x + 0;
            y = y - 1;
        }
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string str;
    cin >> str;
    int x = 0, y = 0;
    if(str[0] == 'G' || str[0] == 'B') {
        Solve(str, x, y);
    }
    else if(str[0] == 'L' || str[0] == 'R'){
        Solve(str, y, x);
    }
    cout << x << y;
    return 0;
}
