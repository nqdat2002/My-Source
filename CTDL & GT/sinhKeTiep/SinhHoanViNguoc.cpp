#include <iostream>
using namespace std;
int n,a[100];
int ok=1;
int unused[100]; 
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		unused[i]=1; 
	} 
} 
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i]; 
	} 
	cout<<" "; 
} 
void back_P(int i){
	for(int j=n;j>=1;j--){
		if(unused[j]==1){
			a[i]=j;
			unused[j]=0;
			if(i==n) xuat();
			else back_P(i+1);
			unused[j]=1; 
		} 
	} 
} 
int main(){
	int t;cin>>t;
	while(t--){
		init(); 
		back_P(1);
		cout<<endl;
	}
	return 0; 
}
