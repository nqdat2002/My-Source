#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>s;
    if(s[0]=='a'||s[0]=='?')
    {
        if(s[s.size()-1]=='b'||s[s.size()-1]=='?')
            cout<<"1";
        else
            cout<<"0";
    }
    else
    {
        if(s[s.size()-1]=='b'||s[s.size()-1]=='?')
            cout<<"0";
        else
            cout<<"-1";
    }
}