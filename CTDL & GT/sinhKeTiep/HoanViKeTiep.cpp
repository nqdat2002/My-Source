#include<iostream>
#include<algorithm>
#include <string> 
using namespace std;
int n;
int a[1000];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
} 
void next(){
	int j=n-1; //bat dau tu vi tri n-1 
	while(j>0&&a[j]>a[j+1]){ //khi gap so dau tien lon hon vi tri sau no 
		j--; 
	}
	if(j>0){
		int k=n;
		while(a[j]>a[k]){
			k--; 
		}
		int t=a[j];//t=6 
		a[j]=a[k]; //a[j]==6 
		a[k]=t; //a[k]==6 
		int r=j+1; //r==2 
		int s=n; //s==6 
		while(r<=s){
			t=a[r];
			a[r]=a[s];
			a[s]=t;
			r++;
			s--; 
		} 
	}
	else{
		for(int j=1;j<=n;j++){
			a[j]=j;
		}
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() { 
	int t; 
	cin>>t; ;
	while(t--){ 
		init();
		next();	
		xuat();	
	}
	return 0; 
}
