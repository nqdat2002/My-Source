#include <bits/stdc++.h>
using namespace std;
int n,a[26];
string s;
int main() {
    cin>>n;
    cin>>s;
    for(int i=0;i<26;i++)
        cin>>a[i];
    for(int i=0;i<n;i++) {
        if(s[i]!='?') {
            a[s[i]-'a']--;
            if (a[s[i]-'a']<0) {
                cout<<"-1";
                return 0;
            }
        }
    }
    int i = 0;
    for(char c='a';c<='z';c++) {
        for(int x=1;x<=a[c-'a'];x++) {
            while(s[i]!= '?')
                i++;
            s[i] = c;
        }
    }
    cout<<s;
    return 0;
}
