#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1;
    int sum = 0;
    int n = s1.size();
    for(int i = 0; i < n; i++){
        if((int) s1[i] >= 48 && (int)s1[i] <=57){
            sum+= (int)s1[i]-48;
        }
        else { s2 += s1[i];}
    }
    cout << s2 << sum;
    return 0;
}


