/**************************************
	Name: 
	Copyright: C 2021
	Author: DevC Fan
	Date: 14/10/21 19:33
	Description: 
	Recursive
	R(x) R(y) size(y) != size(x)
	R1. Finish
	R2. R(x) <- R(y)
******************************************/
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

// giai thua
ll Fact(int n){
	ll r = 1;
	for(int i = 2; i <= n; i ++) 
		r *= i;
	return r;
}
ll RFact(int n){
//	return (n < 0) return 0;
//	return (n < 2) ? 1: RFact(n - 1) * n;
	return (n < 0) ? 0 : ((n < 2) ? 1: RFact(n - 1) * n);
}
void TestFact(int n){
	for(int i = 0; i <= n; i ++)
		cout << "\n Fact of " << i << " = " << Fact(i) << " : " << RFact(i);
}


// fibonacci
// Def Fib(0) = Fib(1) = 1
// Def Fib(n) = Fib(n - 2) + Fib(n - 1);
ll Fib(int n){
	if(n < 0) return 0;
	if(n < 2) return 1;
	long a = 1, b = 1, c;
	for(int i = 2; i <= n; i ++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
ll RFib(int n){
	return(n < 0) ? 0 :((n < 2) ? 1 : RFib(n - 1) + RFib(n - 2));
}
void TestFib(int n){
	for(int i = 0; i <= n; i ++)
		cout << "\n Fib of " << i << " = " << Fib(i) << " : " << RFib(i);
}

int main(){
//	cout << " Hello World.";
//	TestFact(7);
//	TestFib(40);
	cout << "\n The End";
	return 0;
}
