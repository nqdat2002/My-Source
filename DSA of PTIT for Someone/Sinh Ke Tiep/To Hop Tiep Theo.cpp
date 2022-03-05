#include <bits/stdc++.h>
using namespace std;
int n, k, c[1000];
int kq;
void sinhketiep(){
	set<int> st;  // set la cau truc du lieu luu cac phan tu khong trung nhau
	for(int i = 1; i <= k; i ++)   // luu to hop hien tai vao set
		st.insert(c[i]);
	// hien tai st.size() == k
	int i = k;
	// duyet tu cuoi duyet nen, neu c[i] == n - k + i thi giam i
	while(i >= 1 && c[i] == n - k + i){
		--i;
	}
	if(i == 0) // neu la cau hinh cuoi cung thi ket qua = K
		kq = k;
	else{
		c[i] ++;
		st.insert(c[i]);
		// tang vi tri hien tai. Cac vi tri con lai = vi tri truoc + 1;
		for(int j = i + 1; j <= k; j ++) {
			c[j] = c[j - 1] + 1;
			st.insert(c[j]);
		}
		// so phan khac to hop truoc se la st.size() - k
		// vi du: n = 5, k = 3;
		// to hop hien tai: 1 3 5 -> them vao set: st.size() == 3 va st = {1, 3, 5}
		// to hop tiep theo cua no la 1 4 5 -> them vao set: st.size() == 4 va st = {1, 3, 4, 5}  
		// ----> so ptu sau khac so ptu truoc la st.size() - k
		kq = st.size() - k;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		kq = 0;
		for(int i = 1; i <= k; i ++) cin >> c[i];
		sinhketiep();
		cout << kq << endl;
	}
	return 0;
}
