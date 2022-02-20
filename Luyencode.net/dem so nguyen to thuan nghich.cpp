#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int c = 1e7;
bool tn(string &x) {
	int n = x.size(), cnt = 0;
	for(int i = 0; i < n / 2; i ++){
		if(x[i] == x[n - i - 1])
			cnt++;
	}
	if (cnt == n / 2)
		return true;
	return false;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<pair<string, bool> >pr;
 	for (int i = 0; i <= c; i++){
 		string a = to_string(i);
 		pair<string, bool> x = make_pair(a, true);
 		pr.push_back(x);
	}
  	for (int i = 0; i <= sqrt(c); i++){
    	if (pr[i].second == true){
    	 	for (int j = 2 * i; j <= c; j += i){
    	 		pr[j].first = to_string(j);
    	 		pr[j].second = false;
			}
		}
  	}
	int a, b; cin >> a >> b;
    int mark = 0;
	for(int i = a; i <= b; i ++){
		string x = to_string(i);
		if(pr[i].second && tn(x)){
            mark ++;
			cout << pr[i].first << endl;
        }
	}
    if(mark == 0) cout << 0;
	return 0;
}
