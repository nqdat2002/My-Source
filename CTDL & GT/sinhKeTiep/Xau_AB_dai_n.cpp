#include <iostream>
using namespace std;
int n;
char a[100];
void xuat(){
	for(int j=1;j<=n;j++){
		cout<<a[j];
	}
	cout<<" ";
}
void back(int i){
	for(char j='A';j<='B';j++){
		a[i]=j;
		if(i==n) xuat();
		else back(i+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		back(1);
		cout<<endl;
	}
	return 0;
}
