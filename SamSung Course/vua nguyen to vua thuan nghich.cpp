#include <bits/stdc++.h>
using namespace std;
bool N[2000000];
bool check(int n){
	int res = 0, m = n;
	while(n > 0){
		int i = n % 10;
		res = (res * 10) + i;
		n /= 10;
	}
	if(res == m) 
		return true;
	else 
		return false;
}
void init(){
	for (int i = 2; i <= 2000000; i++){
    	N[i] = true;
  	}
	for (int i = 2; i <= sqrt(2000000); i++) {
    	if (N[i] == true)
		{
    	 	for (int j = 2 * i; j <= 2000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);              
    cout.tie(0);
    init();
//	int t; cin >> t;
	int t = 2;
	while(t--){
		int c, d, cnt = 0;
		scanf("%d %d", &c, &d);
		for(int k = c; k <= d; k ++){
			if(N[k] == true && check(k) == true){
			//	cnt ++;
				cout << k << " ";
			//	if(cnt % 10 == 0) cout << endl;
			}
		}	
	}
	return 0;
}
