#include <bits/stdc++.h>
using namespace std;
const double A = 4 * sqrt(3) + 4;
int main(){
	double S;
	cin >> S;
	double B = 4 * sqrt(S);
	double x1 = (( - B  + sqrt(B * B + 4 * S * A) )/(2 * A));
	cout << fixed << setprecision(4) << x1;
	return 0;
}

