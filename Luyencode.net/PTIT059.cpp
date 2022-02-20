#include<bits/stdc++.h>
using namespace std;
int TimSoLonHon(int a[],int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]>x) return i;
    }
}
int main (){
    int n;
    cin >> n;
    int a[10000];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (n==1)
    {
        if (x>a[0]) a[1]=x;
        else if (x<a[0]) {a[1]=a[0] ; a[0]=x;}
    }

    for (int i=n;i>=TimSoLonHon(a,n,x);i--)
    {
        if (a[i]==a[TimSoLonHon(a,n,x)]) a[i]=x;
        else a[i]=a[i-1];

    }
    for (int i=0;i<=n;i++)
    {
        cout << a[i] << " ";
    }
	return 0;
}
