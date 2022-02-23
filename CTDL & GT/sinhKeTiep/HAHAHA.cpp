#include <bits/stdc++.h>
using namespace std;
int n;
char a[1000];
string k="AH"; 
bool check(){
	for(int i=0;i<n;i++){
		if(a[0]=='A'||a[n-1]=='H') return false; 
		else if(a[i]==a[i-1]&&a[i]=='H') return false; 
	} 
	return true; 
} 
void nhap(){
	cin>>n; 
} 
void xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]; 
	} 
	cout<<endl; 
} 
void necct(int i){
	for(int j=0;j<=1;j++){
		a[i]=k[j];
		if(i==n-1){
			if(check()==true) xuat(); 
		} 
		else necct(i+1); 
	} 
} 
int main(){
	int t;cin>>t;	
	while(t--){
		nhap();
		necct(0);
	} 
}
