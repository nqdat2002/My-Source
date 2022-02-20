#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[105][2];
	for(int i=0;i<t;i++){
		for(int j=0;j<2;j++){
			cin >> a[i][j];
		}
	}
	int max=abs(a[0][0]-a[1][0])+abs(a[0][1]-a[1][1]);
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			if(abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1])>max)
				max=abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1]);
		}
	}
	cout <<max;
	return 0;
}
