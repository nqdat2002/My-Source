#include <iostream>
#include <stdbool.h>
#include <string>
using namespace std;
string Summation(string a, string b){
	string res = "";
	int tmp = 0;
	while(a.size() < b.size()) 
		a= "0" + a;
	while(a.size() > b.size()) 
		b= "0" + b;
	int len = a.size() - 1;
	for(int i = len; i >= 0; i--){
		
		int number = int(a[i] - '0') + int(b[i] - '0') + tmp;
		res = char(number % 10 + '0') + res;
		tmp = number / 10;
	
	}
	if(tmp > 0) 
		res = char(tmp + '0') + res;
	return res;
}
string Subtraction(string a, string b){
	string res = "";
	int tmp = 0;
	while(a.size() < b.size()) 
		a= "0" + a;
	while(a.size() > b.size()) 
		b= "0" + b;
	bool Isbigger = false;
	int mark = 0;
	if(a < b){
		a.swap(b);
		Isbigger = true;
		mark = 1;
	}
	int len = a.size() - 1;
	for(int i = len; i >= 0; i--){
		int number = int(a[i] - '0') - int(b[i] - '0') - tmp;
		if(number < 0){
			res = char(number + 10 + '0') + res;
			tmp = 1;
		}
		else {
			res = char(number + '0') + res;
			tmp = 0;
		}
	}
	while (res.length() > 1 && res[0] == '0') 
		res.erase(0, 1);
	if(mark == 1) res = res.insert(0, "-");
	return res;	
}
string Multi(string a, string b) {
    string res = "";
    int n = a.length();
    int m = b.length();
    int len = m + n;
    int carry = 0;
    for (int i = len - 1; i >= 0; i--) {
        int tmp = 0;
        for (int j = n - 1; j >= 0; j--) {
            if (i - j <= m && i - j >= 1) {
                int a1 = a[j] - '0';
                int b1 = b[i - j - 1] - '0';
                tmp += a1 * b1;
            }
        }
        tmp += carry;
        carry = tmp / 10;
        res = (char)(tmp % 10 + '0') + res;
    }
    while (res.length() > 1 && res[0] == '0') 
		res.erase(0, 1);
    return res;
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << Summation(a, b) << "\n" << Subtraction(a, b) << "\n" << Multi(a, b);
	return 0;
}

