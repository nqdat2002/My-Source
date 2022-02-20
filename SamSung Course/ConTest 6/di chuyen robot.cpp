#include <bits/stdc++.h>
using namespace std;
typedef struct point{
	int x, y;
} p;
int main(){
	int n; 
	string str;
	cin >> n >> str;
	int x = 0, y = 0;
	int drt = 1;
	for(int i = 0; i < n; i ++){
		if(drt == 1){
			if(str[i] == 'G'){	y ++; drt = 1;} 
			if(str[i] == 'L'){	x --; drt = 4;} 
			if(str[i] == 'R'){	x ++; drt = 2;} 
			if(str[i] == 'B'){	y --; drt = 3;} 
		}
		else if(drt == 2){
			if(str[i] == 'G'){	x ++; drt = 2;} 
			if(str[i] == 'L'){	y ++; drt = 1;} 
			if(str[i] == 'R'){	y --; drt = 3;} 
			if(str[i] == 'B'){	x --; drt = 4;} 
		}
		else if(drt == 3){
			if(str[i]=='G'){	y --; drt = 3;} 
			if(str[i]=='L'){	x ++; drt = 2;} 
			if(str[i]=='R'){	x --; drt = 4;} 
			if(str[i]=='B'){	y ++; drt = 1;} 
		}
		else if(drt == 4){
			if(str[i] == 'G'){	x --;drt = 4;} 
			if(str[i] == 'L'){	y --;drt = 3;} 
			if(str[i] == 'R'){	y ++;drt = 1;} 
			if(str[i] == 'B'){	x ++;drt = 2;} 
		}
	} 
	cout << x << " " << y;
	return 0;
}