#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n, d, a1 = 1, a2 = 1, b1, b2;
cin >> n >> m >> d;
b1 = n, b2 = m;
while(n != d){
a1++;
if(n > d)
n -= d;
if(n < d)
n += b1;
}
while(m != d){
a2++;
if(m > d)
m -=d;
if(m < d)
m += b2;
}
if(a1 == a2)
cout << 0;
else if(a1 > a2)
cout << -1;
else
cout << 1;
return 0;
}
