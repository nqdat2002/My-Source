#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
    int n, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    vector<int> t;
    t.resize(n);
    for (int i = 0; i < n; i++){
        t[m]++;
        if (a[i] != a[i + 1])
            m++;
    }
    int max = -1, maxa;
    m = 0;
    for (int i = 0; i < n; i++){
        if (t[m] >= max){
            maxa = a[i];
            max = t[m];
        }
        if(a[i] != a[i+1])
            m++;
    }
    cout << maxa << ' ' << max;
    return 0;
}
