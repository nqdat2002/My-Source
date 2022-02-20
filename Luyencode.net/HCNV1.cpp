#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,x1,y1,a,b,xmax,xmin,ymax,ymin;
    cin >> x >> y >> x1 >> y1 >> a >> b;
    xmin = x;
    xmax = x1;
    ymin = y;
    ymax = y1;
    if(x>x1){
        xmin = x1;
        xmax = x;
    }
    if(y>y1){
        ymin = y1;
        ymax = y;
    }
    if(a<=xmin || a>=xmax || b>= ymax || b<=ymin)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
