#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
int n, a[10000], k, tmp;
string str;
vector<string> res;
void inp(){
	cin >> n;
	cin >> str;
}
bool cmp(string a, string b){
	return (a < b);
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k){
			string tmp = "";
 			for(int i = 1; i <= k; i ++)
				tmp  = tmp + (str[a[i] - 1]);
			res.push_back(tmp);
		}
		else Try(i + 1);
	}	
}
int main(){
	run1
	while(t--){
		inp();
		tmp = 0;
		for(int x = 1; x <= n; x ++){
			k = x;
	   		Try(1);
	   	}
		sort(res.begin(), res.end(), cmp);
	 	for(int i = 0; i < res.size(); i ++){
	   		cout << res[i] << " ";
		} 
		cout << endl;
		res.clear();
	}
	return 0;
}

