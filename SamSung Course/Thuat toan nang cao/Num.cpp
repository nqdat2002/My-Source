/***********************************
	Name: Num.cpp
	Copyright: (C) 2021
	Author: Devc Fand
	Date: 11/10/21 20:43
	Description: 
	Some algorithms on intergers
	Complexity 
	S1. Encapsulate
	S2. IBM Clean Room
		a) Empty prog is a Cr
		b) 11: 1 lenh / lan het loi
	S3. Atom (nguyen tu) chia nho toi thieu doi tuong -> xem xet / view
	S4. Bam sat cung tien
	S5. Dat ten de de goi	
	S6. Reusing // tai su dung
	S7. Tim cach test all cases
	S8. Tong quat thi de hon cu the
	S9. un - Delete // tam che
	S10. Nen tu lam
	nxhuy564@gmail.com
	* De qua / kho qua / tam thuong / bo ich
	* Hieu
	* loi noi: ro/ khong ?
	* Toc do: nhanh/cham ?
	* Thac mac: 
************************************/
#include <iostream>
#include <string>
using namespace std;

typedef long long ll;   // 64 bit
string DIGITS = "0123456789abcdefghijklmnopqrstuvwxyz";
/*------------------------
	lat 1 so nguyen
	Rev(1024) = 4201
	Rev(2000) = 2
	1234
	[1][2][3][4] -> [4][3][2][1]
	Rule: Lay phai ghep phai
	lay hang don / ghep vao hang don
	long long

--------------------------*/
ll Rev(ll x, int base = 10){
	ll y = 0;
	while(x != 0){
		y = y * base + (x % base);
		x /= base;
	}
	return y;
}

/* --------------------------------------------
	Palindrome / so doi xung / so ganh / so can
	trai = phai
	1003001, 341143, 2,...
	x is a pal iff Rev(x) = x;

-----------------------------------------------*/
bool Pal(ll x){
	return x == Rev(x);
}
// x doi xung trong he 2 va 10
bool BiPal(ll x){
	return x == Rev(x) && x == Rev(x, 2);
}
/*------------------------
liet ke cac so pal 1..n

------------------------*/

// 123 -> "123"
// IntToStr(33, 2) = "10001";
string IntToStr(ll x, int base = 10){
	string s = "";
	while(x != 0){
		s = DIGITS[x % base] + s;
		x /= base;
	}
	return s;
}
void AllPal(ll n){
	int c = 0;
	for(ll x = 1; x <= n; x ++){
		if(Pal(x)){
			cout << "\n " << x;
			++ c;
		}
	}
	cout << "\n Total: " << c << " number(s).";
}

/* ------------------------------
	So doi xung 2 he dem a, b;
	x Pal he a, Pal he b;
	1001 trong he 2 = 9 trong he 10
----------------------------------*/
void AllBiPal(ll n){
	int c = 0;
	for(ll x = 1; x <= n; x ++){
		if(BiPal(x)){
			cout << "\n " << x << " " << IntToStr(x) << " " << IntToStr(x, 2);
			++ c;
		}
	}
	cout << "\n Total: " << c << " number(s).";
}
void Test(){
//	ll x = 123454321;
//	cout << "\n" << x << " ->" << Rev(1234);
//	cout << "\n" << x << "  Is Pal ? " << Pal(x);
//	AllPal(200);
	AllBiPal(20000);
}
int main(){
	Test();
	cout << "\n The End";
}

