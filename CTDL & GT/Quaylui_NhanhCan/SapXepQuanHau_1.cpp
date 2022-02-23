#include<iostream>
#include<algorithm>
#include <string> 
using namespace std;
int n;
int dem;
int a[1000];
bool cot[1000],dcxuoi[1000],dcnguoc[1000];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cot[i]=true;
	}
	for(int i=1;i<2*n;i++){
		dcxuoi[i]=true;
		dcnguoc[i]=true;
	}
} 
void back_P(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&dcxuoi[i-j+n]&&dcnguoc[i+j-1]){
			a[i]=j;
			cot[j]=false;
			dcxuoi[i-j+n]=false;
			dcnguoc[i+j-1]=false;
			if(i==n) dem++;
			else back_P(i+1);
			cot[j]=true; 
			dcxuoi[i-j+n]=true;
			dcnguoc[i+j-1]=true;
		} 
	} 
}
//void xuat(){
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//}
int main() { 
	int t; 
	cin>>t; ;
	while(t--){ 
		init();
		dem=0;
		back_P(1);	
		cout<<dem<<endl;	
	}
	return 0; 
}
