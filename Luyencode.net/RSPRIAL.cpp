#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[1000][1000],k=1;
    cin >> m;
    cin >> n;
    int d=0;
    int hang=m-1;
    int cot=n-1;
    int i;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            cin >> a[i][j];
    while (k<=m*n)
    {
        for (i=d;i<=cot;i++)            //Chạy từ trái qua phải
        {
            cout << a[d][i] << " ";
            k++;

        }
        for (i=d+1;i<=hang;i++)        //Chạy từ trên xuống dưới
        {
            cout <<  a[i][cot] << " ";
            k++;
        }
        for (int i=cot-1;i>=d;i--)
        {
            cout << a[hang][i] << " ";
            k++;
        }
        for (int i=hang-1;i>d;i--)
        {
            cout << a[i][d] << " ";
            k++;
        }
        d++;hang--;cot--;
    }
    return 0;
}