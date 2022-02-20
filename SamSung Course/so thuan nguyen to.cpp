#include<bits/stdc++.h>
using namespace std;
bool N[1000000];
void Init(){
 	for (int i = 2; i <= 1000000; i++){
    	N[i] = true;
  	}
  	for (int i = 2; i <= sqrt(1000000); i++) {
    	if (N[i] == true)
		{
    	 	for (int j = 2 * i; j <= 1000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
}
int Sum(int n){
	Init();
	int a = 0, sum = 0,b = 0;
	while(n){
		int i = n % 10;
		b ++;
		if(N[i] && i >= 2)
			a ++;
		sum = sum + i;
		n /= 10;
	}
	if(a == b && N[sum])
		return 1;
	return 0;
}
int main(){
	Init();
	int t, a, b, cnt;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cnt = 0;
		for(int j = a; j <= b; j ++){
			if(Sum(j) && N[j])
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}


