#include<bits/stdc++.h>
using namespace std;
struct toado{
	double x,y;
};
int main(){
	int n,i;
	cin >> n;
	struct toado A,B,C;
	while (n --) {
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double a=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
		double b=sqrt((A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
		double c=sqrt((B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y));
		if(a<b+c&&b<a+c&&c<a+b)
			cout << fixed << setprecision(2) << (double)0.25*sqrt((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c));
		else
			cout << "INVALID";
		cout << endl;
	}
	return 0;
}
