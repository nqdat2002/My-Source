#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
/*
//tim duong di
int s, m, n;
int a[100];
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == s){
			int cnt = 0;
			for(int l = 1; l <= s; l++)
				if(a[l] == 1)
					cnt += 1;
			if(cnt == n){
				for(int l = 1; l <= s; l++){
					if(a[l] == 0)
						cout << "H" << " ";
					else cout << "V" << " ";
				}
				cout << endl;
			}

		}
		else Try(i + 1);
	}
}
int main(){
//	int t; cin >> t;
//	while(t--){
		cin >> n >> m;
		s = m + n;
		Try(1);
//}
	return 0;
}

*/

// sinh xau nhi phan
/*----------------------------------
int a[50] = {0}, n;
bool ok = false;
void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
	cout << endl;
}
void sinhkt(){
	int i = n;
	while(a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = true;
	else a[i] = 1;
}
int main(){
	cin >> n;
	while(!ok){
	   in();
	   sinhkt();
	}
	return 0;
}
*/


/*

void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
// quay lui: Sinh xau nhi phan
bool check(vector<int> c, int n, int k){
}
int n, k, a[100];
void in(){

	vector<int> c;
	for(int i = 1; i <= n; i ++)
		c.push_back(a[i]);
	if(check(c, n, k)){
		for(int i = 0; i < n; i ++)
			cout << c[i] << " ";
		cout << endl;
	}
	
}
void Try(int i){
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == n) in();
		else Try(i + 1);
	}
}
int main(){
	FileIO();
	cin >> n >> k;
	Try(1);
	return 0;
}


*/



// xau nhi phan k bit 1 lien tiep
/*
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

bool mark = false;
string s = "";
vector<string> res;
int n, k;
int a[100];
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - k){
			for(int l = 1; l <= n - k; l++){
				
				if(l == 1 && a[l] == 1){
					string tmp = "";
					tmp = tmp + s;
					for(int p = 1; p <= n - k; p ++){
						if(a[p] == 0) 
							tmp = tmp + "1";
						else 
							tmp = tmp + "0";
					} 
					res.push_back(tmp);
				}
				if(l == n - k && a[l] == 1){
					string tmp = "";
					for(int p = 1; p <= n - k; p ++){
						if(a[p] == 0) 
							tmp = tmp + "1";
						else 
							tmp = tmp + "0";
					} 
					tmp += s;
					res.push_back(tmp);
				}
				if(a[l] && a[l - 1] && l > 1){
					string tmp = "";
					for(int p = 1; p <= n - k; p ++){
						if(p == l) tmp += s;
						if(a[p] == 0) 
							tmp += "1";
						else 
							tmp += "0";
					} 
					res.push_back(tmp);
				}

			}
		}
		else Try(i + 1);
	}
}
int main(){
	FileIO();
	cin >> n >> k;
	for(int i = 0; i < k; i ++){
		s = s + "1";
	}
	Try(1);
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i ++){
		for(int j = 0; j < res[i].size(); j ++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

*/
/*

// xau AB co k ki tu A lien tiep
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
#include<bits/stdc++.h>
using namespace std;
string s = "";
vector<string> b;
int n, k, a[100];
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n - k){
            for(int l = 1; l <= n - k; l ++){
                if(l == 1 && a[l] == 1){
                    string res = "";
                    res = res + s;
                    for(int p = 1; p <= n - k; p ++){
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    b.push_back(res);
                }
                if(l == n - k && a[l] == 1){
                    string res = "";
                    for(int p = 1; p <= n - k; p ++){
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    res = res + s;
                    b.push_back(res);
                }
                if(a[l] && a[l - 1] && l > 1){
                    string res = "";
                    for(int p = 1; p <= n - k; p ++){
                        if(p == l) res = res + s;
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    b.push_back(res);
                }
            }
        }
        else Try(i + 1);
    }
}
int main(){
	FileIO();
    cin >> n >> k;
    for(int i = 0; i < k; i ++) s = s + "A";
    Try(1);
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
    for(int i = 0; i < b.size(); i ++){
        for(int j = 0; j < b[i].size(); j ++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
*/





/*
// m bit 1, k bit 0 lien tiep
bool ktra(vector<int> M, int n, int m, int k) {
	int x = 0,y=0;
	for (int i = 0; i < n; i++) {
		int dem1 = 0;
		if (M[i] == 0) {
			for (int j = i; j <m+i&&j<n ; j++) {
				if (M[i] == M[j])dem1++;
			}
			if (dem1 == m)x++;
		}
		int dem2 = 0;
		if (M[i] == 1) {
			for (int j = i; j <k+i&&j<n; j++) {
				if (M[i] == M[j])dem2++;
			}
			if (dem2 == k)y++;
		}
	}
	if (x == 1 && y == 1)return true;
	return false;
}
int n, m, k, a[100];
void in(){
	vector<int> c;
	for(int i = 1; i <= n; i ++)
		c.push_back(a[i]);
	if(ktra(c, n, m, k)){
		for(int i = 0; i < n; i ++)
			cout << c[i] << " ";
		cout << endl;
	}
	
}
void Try(int i){
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == n) in();
		else Try(i + 1);
	}
}
int main(){
	FileIO();
	cin >> m >> k >> n;
	Try(1);
	return 0;
}
*/
// m bit 1 lien tiep
int n, k , a[100] = {0};
bool check(vector<int> &a, int n, int m){
    int mark = 0;
    for(int i = 0; i < n; i ++){
        int cnt = 0;
        if(a[i] == 1){
            for(int j = i; j < m + i && j < n; j ++)
                if(a[i] == a[j]) cnt ++;
        }
        if(cnt == m) mark ++;
    }
    if(mark == 1) 
        return true;
    return false;
}
void outp(){
    vector<int> c;
    for(int i = 1; i <= n; i ++) c.push_back(a[i]);
    if(check(c, n, k)){
        for(int j = 0; j < n; j ++)
            cout << c[j] << " ";
        cout << endl;
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
    	if(i == n) outp();
    	else Try(i + 1);
    }
}
int main(){
	FileIO();
    cin >> k >> n;
    Try(1);
    return 0;
}
