#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int cnt = 0;
bool Phantich(vector<int> &v, int a) {
	while(a%2==0) 
        v.push_back(2), a/=2;
	while(a%3==0) 
        v.push_back(3), a/=3;
	while(a%5==0) 
        v.push_back(5), a/=5;
	if(a>1) return false;
	return true;
}
int main(){
    v.clear();
	int a, b;
	cin >> a >> b;
	int n = __gcd(a, b);
    a /= n;
    b /= n;
    if(!Phantich(v, a) || !Phantich(v, b))
        cout << -1 << endl;
    else cout << v.size()<< endl;
   	return 0;
}