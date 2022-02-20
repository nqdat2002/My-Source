#include<bits/stdc++.h>
using namespace std;
void move(int n,char A,char B,char C){
	if(n==1){
		cout << A << "->" << C << endl;
	}
	else{
		move(n-1,A,C,B);
		cout << A << "->" << C << endl;
		move(n-1,B,A,C);
	}
}
int main(int argc,char**argv){
	int n;
	cin >> n;
	move(n,'A','B','C');
	return 0;
}
