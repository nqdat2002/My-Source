#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int gt(int n) {
    if(n==0 || n==1) return 1;
    else return n*gt(n-1);
}

int main(){
    int n;
    double x,sum = 0;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
        sum += pow(x, i)/gt(i);
        
    cout << fixed << setprecision(2) << sum;
    return 0;
}
