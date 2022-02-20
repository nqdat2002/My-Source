/*------------------------------
	Name: 
	Copyright: C 2021
	Author: DevC Fan
	Date: 14/10/21 20:21
	Description: 
	Divide and Conquer
-------------------------------*/
#include <iostream>
using namespace std;
typedef long long ll;
void Go(){
	cout << " ? ";
	fflush(stdin);
	if(cin.get() == '.'); exit(0);
}
// Min-Max of Arrays
int a[1000] = {7, 9, -12, 71, 22, 13, 28, -1, 9, 12};
void Print(int a[], int d, int c, const char * msg = ""){
	cout << msg;
	for(int i = d; i <= c; i ++){
		cout << a[i] << " ";
	}
}
int MinIndex(int a[], int d, int c){
	if(d == c) return d;
	int m = (d + c) / 2; 
	int i1 = MinIndex(a, d, m);
	int i2 = MinIndex(a, m + 1, c);
	return (a[i1] < a[i2]) ? i1 : i2;
}
void Test1(int v){
	int n = 10;
	Print(a, 0, n - 1);
	for(int d = v; d < n; d++){
		cout << "\n MinVal" << d << " : " << n - 1 << " " << MinIndex(a, d, n - 1); 
		Go;
	}
}

/*------------------------------
	nghi 1 so x thuoc a..b Question Y/N (min) -> key
	ex: 1..40, max = 6, min = ?
	
------------------------------*/
int SecretNum(int a, int b){
	int m;
	char ch;
	int q = 0;
	while(a < b){
		m = (a + b)/2;
		++q;
		do{
			cout << q << "." << "\n Your number >  " << m << " [Y/N]: ";
			ch = toupper(cin.get());
			if(ch == 'Y') a = m + 1;
			else b = m;
		}while(ch != 'Y' && ch != 'N');
	}
//	cout << "\n Your number is " << a;
	return a;
}
void Birthday(){
	int month = SecretNum(1, 12);
	int day = SecreatNum(1, 31);
	cout << "\n Your Birthday is " << day << " thang" << month << endl;
}
void Test(){
	SecretNum(1, 30);
	Go();
}
int main(){
	Test();
	return 0;
}

