#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++) cin >> a[i];
    sort(a, a + n);
    int res = a[n - 1];
    bool mark = false;
    for(int i = n - 1; i >= 0; i --) {
        if(a[i] < res){
        	cout << a[i];
            mark = true;
        	break;
    	}
    }
    if(mark == false) cout << "NOT FOUND";
}
