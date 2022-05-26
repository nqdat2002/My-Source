#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    //In;
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int cs;
        int r;
        string s;
        cin>>cs>>r>>s;
       
        //Out
        cout<<cs<<" ";
        for (int i=0; i<s.length(); i++)
        {
            for (int j=1; j<=r; j++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
   
    return 0;
} 
