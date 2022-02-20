#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int n, k, a[100];
long b[100];
long S;
bool ok = false;
int x = 0;
vector< vector<int> > res;
vector< string > key;

bool check(vector<int> c){
	int len = c.size();
	for(int i = 0; i < len - 1; i ++){
		if(c[i] > c[i + 1]) 
			return false;
	}
	return true;
}

bool cmp(string a, string b){
	return a < b;
}

string changes(int n){
	string ans = "";
	while(n > 0){
		int i = n % 10;
		ans = ans + to_string(i);
		n /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

void inp(){
	cin >> n >> S;
	for(int i = 1; i <= n; i ++) cin >> b[i];
}

void outp(){
	vector<int> c;
	long sum = 0;
	for(int i = 1; i <= k; i ++){
		sum += b[a[i]];
		c.push_back(b[a[i]]);
	}
	if(S == sum){
		ok = true;
		x = c.size();
	}
}

void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) outp();
		else Try(i + 1);
	}
}

int main(){
	ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
	FileIO();
	inp();
	for(int i = 2; i <= n; i ++){
		k = i;
		Try(1);
		if(ok == false) continue;
		else {
			cout << -1 << endl;
			break;
		}
	}
	cout << x << endl;
	/*
	int x = res.size();
	for(int i = 0; i < x; i ++){
		int y = res[i].size();
		string d = "";
		for(int j = 0; j < y; j ++){
			d = d + changes(res[i][j]);
			d = d + " ";
		}	
		key.push_back(d);
	}
	int z = key.size();
	sort(key.begin(), key.end(), cmp);
	for(int i = 0; i < z; i ++){
		cout << key[i] << endl;
	}
	*/
	return 0;
}