#include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;
long long a[1000000],k;
int n;
int main(){
    map <long long,int> d;
    cin >> n >> k;
    long long cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        d[a[i]]++;
        long long tmp = k - a[i]*a[i];
        if (tmp >= 0) cnt += d[tmp];
    }
    cout << cnt;
    return 0;
}
