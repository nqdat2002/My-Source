#include <iostream>
#include <vector>
using namespace std;
 
int N;
int A[102][102];
int read ()
{
    cin>>N;
    if (N==0) return 0;
    for (int i=1; i<=N; i++)
    {
        for (int j=1; j<=N; j++)
        {
            cin>>A[i][j];
        }
    }
    return 1;
}
 
int phanNhom()
{
    vector <int> N1;
    vector <int> N2;
    for (int i=1; i<=N; i++)
    {
        int kt1=0;
        for (int j=0; j<N1.size(); j++)
        {
            if (A[i][N1[j]]==1)
            {
                kt1 = 1;
                break;
            }
        }
        int kt2=0;
        for (int j=0; j<N2.size(); j++)
        {
            if (A[i][N2[j]]==1)
            {
                kt2 = 1;
                break;
            }
        }
        if (kt1==1 && kt2==0)
            N2.push_back(i);
        else if (kt1==0 && kt2==1)
            N1.push_back(i);
        else if (kt1==1 && kt2==1)
            return 0;
        else
            N1.push_back(i);
    }
    return 1;
}
 
int main ()
{
    while (read())
    {
        if (phanNhom()==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
} 
