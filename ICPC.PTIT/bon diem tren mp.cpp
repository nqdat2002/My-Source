#include<bits/stdc++.h>
using namespace std;
struct toado{
	double x,y,z;
};
int main(){
	int t;
	cin >> t;
	struct toado A,B,C,D;
	while(t--){
		cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> C.x >> C.y >> C.z >> D.x >> D.y >> D.z;
		double vtabx=(B.x-A.x), vtaby=(B.y-A.y), vtabz=(B.z-A.z);
		double vtacx=(C.x-A.x), vtacy=(C.y-A.y), vtacz=(C.z-A.z);
		double vtadx=(D.x-A.x), vtady=(D.y-A.y), vtadz=(D.z-A.z);
		
		double vtchx = vtaby*vtacz - vtacy*vtabz;
		double vtchy = vtabz*vtacx - vtabx*vtacz;
		double vtchz = vtabx*vtacy - vtacx*vtaby;
		
		if(vtadx*vtchx + vtady*vtchy + vtadz*vtchz == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
