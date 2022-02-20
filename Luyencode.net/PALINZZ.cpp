#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int m,l,r;
    cin>>s>>m;
    while (m--)
    {
        cin>>l>>r;
        string nguon=s;
        string temp= nguon.substr(l-1,r-l+1);
        string nguoc= temp;
        reverse(nguoc.begin() ,nguoc.end());
        if(temp==nguoc)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
    
    return 0;
}
