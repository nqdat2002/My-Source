#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main ()
{
    string xau;
    cin>>xau;
    stack <int> s;
    int ktAdd=0;
    for (int i=0; i<xau.length(); i++)
    {
        if (xau[i]=='(')
        {
            s.push(0);
        }
        else if (xau[i]==')')
        {
            int tmp=0;
            while (!s.empty() && s.top()!=0)
            {
                tmp+=s.top();
                s.pop();
            }
            if (!s.empty() && s.top()==0)
            {
                s.pop();
                s.push(tmp);
            }
        }
        else if (xau[i]>='0' && xau[i]<='9')
        {
            int so=xau[i]-'0';
            if (!s.empty())
            {
                int tmp = s.top();
                s.pop();
                tmp = tmp * so;
                s.push(tmp);
            } else 
            {}
        }
        else if (xau[i]=='C')
        {
            s.push(12);
        }
        else if (xau[i]=='H')
        {
            s.push(1);
        }
        else if (xau[i]=='O')
        {
            s.push(16);
        }
    }
    int S=0;
    while (!s.empty())
    {
        S+=s.top();
        s.pop();
    }
    cout<<S;
    return 0;
}
