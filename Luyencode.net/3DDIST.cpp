// Cho tam giac ABC
// Gia su: a=BC, b=AC, c=AB
//         p la nua chu vi tam giac ABC
//         S la dien tich tam giac ABC
// Cong thuc Herong: S=sqrt(p*(p-a)*(p-b)*(p-c))
// Ve duong cao h=AH cua tam giac ABC, ta co:
//      S=1/2*BC*AH=1/2*a*h
//   => h=2*S/a
// h chinh la khoang cach tu A den BC

#include <bits/stdc++.h>
using namespace std;

int T;
double xa,ya,za,xb,yb,zb,xc,yc,zc;

double Dist(double xa,double ya,double za,double xb,double yb,double zb)
{
    return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)+(za-zb)*(za-zb));
}

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("01.in","r",stdin);
    freopen("01.out","w",stdout);
    cin>>T;
    while(T--)
    {
        cin>>xa>>ya>>za;
        cin>>xb>>yb>>zb;
        cin>>xc>>yc>>zc;
        double c=Dist(xa,ya,za,xb,yb,zb);
        double b=Dist(xa,ya,za,xc,yc,zc);
        double a=Dist(xc,yc,zc,xb,yb,zb);
        double p=(a+b+c)/2.0;
        double S=sqrt(p*(p-a))*sqrt((p-b)*(p-c));
        double h=2.0*S/a;
        cout<<setprecision(2)<<fixed<<h<<'\n';
    }
}
