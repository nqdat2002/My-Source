#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int dt(int x1,int y1,int x2,int y2,int x3,int y3){
    return abs(x1*(y3-y2) + x2*(y1-y3) + x3*(y2 - y1));
}
int main(){
    int x[4],y[4];
    int a,b;
    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    cin >> a >> b;
    x[3] = x[0];
    y[3] = y[0];
    int op = 0;
    for (int i = 0; i < 3; i++){
        int tmp = dt(a,b,x[i],y[i],x[i+1],y[i+1]);
        if (tmp == 0){
            cout << "NO";
            return 0;
        }
        op += tmp;
    }
    if (op == dt(x[0],y[0],x[1],y[1],x[2],y[2])) cout << "YES";
        else cout << "NO";
    return 0;
}
