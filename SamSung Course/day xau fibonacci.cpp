/*
#include<bits/stdc++.h>
using namespace std;
long long F[93];
void Solve(){
	long long n,i;
	cin>>n>>i;
	while(n>2){
		if(i<=F[n-2]) n-=2;
		else{
			i-=F[n-2];
			n-=1;
		}
	}
	if(n==1) cout<<'A';
	else cout<<'B';
	cout<<'\n';
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	F[1]=F[2]=1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1]+F[i-2];
	}
	int t;
	cin>>t;
	while(t--){
		Solve();
	}
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
long long f[100];
char fiboW(int n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k < f[n - 2]) return fiboW(n - 2, k);
	return fiboW(n - 1, k - f[n - 2]);
}
int main(){
	f[0] = 0; f[1] = 1;
	for(int i = 2; i <= 92; i ++){
		f[i] = f[i - 1] + f[i - 2];
	}
	int t, n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cout << fiboW(n, k) << endl;
	}
	return 0;
}
