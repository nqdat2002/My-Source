#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y;
	cin >> t;
	while(t--){
		int a[1000];
		cin >> x >> y;
		int c=0;
		for(int i=0;i<x;i++){
			cin >> a[i];
		}
		for(int i=0;i<x;i++){
			if(a[i]<=0) c++;
		}
		if(c<y) cout << "YES";
		else cout << "NO";
		cout <<'\n';
	}
}
