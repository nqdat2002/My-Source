#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
bool N[500000];
void sang(){
	N[0] = N[1] = false;
 	for (int i = 2; i <= 500000; i++)
    	N[i] = true;
  	for (int i = 2; i <= sqrt(500000); i++) 
    	if (N[i] == true)
    	 	for (int j = 2 * i; j <= 500000; j += i) 
     			N[j] = false;	
}
int main(){

	while(t--){
	
	}
	return 0;
}

