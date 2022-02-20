#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef struct
{
    int h, w;
}tg;
void nhap(tg &a)
{
    cin>>a.h>>a.w;
}
string ans(tg a, tg b, tg c){
    if((b.w == c.h && b.h + c.w == a.h && b.w + a.w == a.h)
     || (a.h == b.h && b.h == c.h && a.w + b. w + c.w == a.h)
     || (b.h == c.h && b.h + a.w == a.h && b.w + c.w == a.h))
     return "YES";
     return "NO";
}
int main(){
    tg a,b,c;
    nhap(a);
    nhap(b);
    nhap(c);
    cout << ans(a,b,c);
    return 0;
}
