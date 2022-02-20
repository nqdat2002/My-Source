#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    long long a, n;
    map<long long, long long> m;
    cin >> n;
    for(long long i = 0 ; i < n ; i++){
        cin >> a;
        m[a]++;
    }
    long long h1 = 0, h2 = 0;
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second >= 4){
            h2 = i->first;
            h1 = h2;
        }
        else if(i->second >= 2){
            h2 = h1;
            h1 = i->first;
        }
    }
    cout << h1 * h2;
	return 0;
}
