#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++) cin >> a[i];
    int m = -1e9;
    int id;
    for(int i = 0; i < n; i ++) {
        if(a[i] >= m){
        	m = a[i];
            id = i;
    	}
    }
    cout << id << endl;
}
