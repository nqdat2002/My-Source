#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t; cin >> t;
	ll a, b, c;
	while(t--){
		cin >> a >> b >> c;
		if(c==0) 
            cout<<"="<<endl;
		else if(c % 2 == 0){
			a = abs(a);
			b = abs(b);
			if(a > b) 
                cout << ">" << endl;
			else if(a < b) 
                cout<< "<" << endl;
			else 
                cout << "=" << endl;
		}
		else {
			if(a > b) 
                cout << ">" << endl;
			else if(a < b) 
                cout << "<" << endl;
			else 
                cout << "=" << endl;
		}
	}
    return 0;
}