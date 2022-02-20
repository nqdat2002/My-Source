#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    for(int i=1;i<=ty-sy;i++)
    {
        cout<<"U";
    }
    for(int i=1;i<=tx-sx;i++)
    {
        cout<<"R";
    }
    for(int i=1;i<=ty-sy;i++)
    {
        cout<<"D";
    }
    for(int i=1;i<=tx-sx;i++)
    {
        cout<<"L";
    }
    cout<<"L";
    for(int i=0;i<=ty-sy;i++)
    {
        cout<<"U";
    }
    cout<<"R";
    for(int i=1;i<=tx-sx;i++)
    {
        cout<<"R";
    }
    cout<<"D";
    cout<<"R";
    for(int i=0;i<=ty-sy;i++)
    {
        cout<<"D";
    }
    cout<<"L";
    for(int i=1;i<=tx-sx;i++)
    {
        cout<<"L";
    }
    cout<<"U";
    return 0;
}
