#include <bits/stdc++.h>
using namespace std;
int n,a[1000]; 
bool check(){
	for(int i=0;i<n;i++){
		if(a[i]!=a[n-i-1]) return false; 
	} 
	return true; 
} 
void nhap(){
	cin>>n; 
} 
void xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "; 
	} 
	cout<<endl; 
} 
void necct(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1){
			if(check()==true) xuat(); 
		} 
		else necct(i+1); 
	} 
} 
int main(){
	nhap();
	necct(0); 
}
