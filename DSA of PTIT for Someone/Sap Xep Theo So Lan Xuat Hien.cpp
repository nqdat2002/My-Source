#include <bits/stdc++.h>
using namespace std;
struct Data{
	int key, value;
};
bool ss(Data a, Data b){
	if(a.key == b.key)
		return a.value < b.value;
	return a.key > b.key;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		struct Data a[n + 5];
		int Count[100005];
		memset(Count, 0, sizeof(Count));
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			a[i].value = x;
			Count[x]++;
		}
		for(int i = 0; i < n; i++)
			a[i].key = Count[a[i].value];
		sort(a, a + n, ss);
		for(int i = 0; i < n; i ++)
			cout << a[i].value << " ";
		cout << endl;
	}
}
