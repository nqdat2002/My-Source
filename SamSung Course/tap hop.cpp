#include <bits/stdc++.h>
using namespace std;
int n, k, s, t, ck = false;
int cnt = 0;
int a[21];
void init(){
	for(int i = 1; i <= k; i ++)
		a[i] = i;
}
void sum(){
	int tmp = 0;
	for(int i = 1; i <= k; i ++){
		tmp += a[i];
	}
	if(tmp == s) cnt++;
}
void next(){
	sum();
	int i = k;
	while(a[i] == n - k + i && i >= 1) i--;
	if(i == 0) ck = true;
	else{
		a[i] ++;
		for(int j = i + 1; j <= k; j ++)
			a[j] = a[i] + j - i;
		
	} 
}
void solve(){
	while(!ck)
		next();
}
int main(){
    while(1){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		else if(n < k) cout << 0 << endl;
		else{
			init();
	    	solve();
	    	cout << cnt << endl;
			ck = false;
			cnt = 0;	
		}
	}
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int n, k, sum;
void dq(int x, int d, int S){
	if (S > sum) return;
	if (d == 0)
		if (S == sum) 
			cnt ++;
	else{
		for (int i = x + 1; i <= n; i ++)
			dq(i, d - 1, S + i);
	}
}
int main (){
	while (1){
		cin >> n >> k >> sum;
		if (n == 0 && k == 0 && sum == 0) break;
		cnt = 0;
		dq(0, k, 0);
		cout << cnt << endl;
	}
	return 0;
}
*/
