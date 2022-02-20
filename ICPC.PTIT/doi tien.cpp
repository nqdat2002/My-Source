/*
#include <bits/stdc++.h>
#define ll long long
const ll inf  = 1e9;
using namespace std;
int n;
ll m, a[35], f[30][100009];
ll dq(int i, int s) {
    if(s == 0) 
		return 0;
    if(i == 0) 
		return inf;
    if(f[i][s] != 0) 
		return f[i][s];
    if(s >= a[i])
        return f[i][s] = min(1 + dq(i, s - a[i]), dq(i - 1, s));
    else
        return f[i][s] = dq(i - 1, s);
}
int main(){
    ios_base::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) 
		cin >> a[i];
    sort(a + 1, a + 1 + n);
    f[n][m] = dq(n, m);
    if(f[n][m] != inf) 
		cout << f[n][m];
    else cout << -1;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int n, s, a[50], c[50], st;
void Back_tracking(int k) {
    int i = k;
    while(i > 0 && c[i] == n - k + i)
    	i = i - 1;
    if(i <= 0 ) st = 1;
    else{
    	c[i] = c[i] + 1;
    	for(int j = i + 1; j <= k; j ++){
    		c[j] = c[j - 1] + 1;
		}
	}
}
int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; i++) 
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
   		st = 0;
   		for(int j = 1; j <= i; j++)
   			c[j] = j;
		while(!st){
			int res = 0;
   			for(int j = 1; j <= i; j++)
   				res += a[c[j]];
			if(res == s){
				cout << i;
				return 0;
			}
			Back_tracking(i);
		}
	}
	cout << -1 ;
   	return 0;	
}
