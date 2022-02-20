#include<iostream>
// newbielady
using namespace std;
bool check(int a,int b) {
	if(a==b) return true;
	else return false;
}
void solve() {
	int a[10000],n;
	cin>>n;
	int do_dai_max=0;
		for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=0;i<(n-1);i++) {
		int count=0, k=0;
		if(check(a[i],a[i+1])==true) {
			while(check(a[i-k],a[i+1+k])) {
				k++;
				count++;
			}
			count*=2;
			if(count>do_dai_max) do_dai_max=count;
		}
		else if(check(a[i],a[i+2])) {
			while(check(a[i-k],a[i+2+k])) {
				k++;
				count++;
			}
			count=count*2+1;
			if(count>do_dai_max) do_dai_max=count;
		}
	}
	cout<<do_dai_max;
}
int main() {
	solve();
	return 0;
}