#include <iostream>
using namespace std;
int main(){
	int t;
	short n[100009], b[100009];
	int c[100009];
	n[0] = 0;
	n[1] = 1;
	b[0] = 0;
	b[1] = 1;
	int i;
	cin >> t;
	for (i = 2; i <= 100000; i++){
		if (i % 2 == 0)
			n[i] = n[i / 2];
		else
			n[i] = n[i / 2] + n[i / 2 + 1];
		if (n[i] > b[i - 1])
			b[i] = n[i];
		else
			b[i] = b[i - 1];
	}
	for (i = 0; i < t; i++)
		cin >> c[i];
	for (i = 0; i < t; i++)
		cout << b[c[i]] << endl;
	return 0;
}