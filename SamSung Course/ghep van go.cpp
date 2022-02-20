#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
int const N = 1e5 + 123;
void TestCase(){
	int n; scanf("%d", &n);
	vector<int> v(n);
	for(auto&x : v) scanf("%d",&x);
	vector<int> st;
	vector<int> greater(n), less(n);
 
	for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && v[i] <= v[st.back()]) st.pop_back();
		if(st.empty()) greater[i] = -1;
		else greater[i] = st.back();
		st.push_back(i);
	}
	st.clear();
 
	for(int i = 0; i < n; i++){
		while(!st.empty() && v[i] <= v[st.back()]) st.pop_back();
		if(st.empty()) less[i] = -1;
		else less[i] = st.back();
		st.push_back(i);
	}
 
	int mx = -1;
	for(int i = 0; i < n; i++){
		int x = less[i];
		int y = greater[i];
		y = (y == -1) ? n : y;
		int calc = (i - x + y - i - 1);
		if(calc >= v[i]) mx = max(mx, v[i]);
	}
	if(mx == -1) mx = 0;
	printf("\n%d", mx);
}
 
int main() {
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 1; scanf("%d", &T);
	while(T--){
		TestCase();
	}
 
}