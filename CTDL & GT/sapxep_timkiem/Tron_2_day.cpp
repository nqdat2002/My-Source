#include <iostream>
using namespace std;
void merge(int a[],int l,int mid,int r){
	int i,j,k=l;
	int n1=mid-l+1;
	int n2=r-mid;
	int L[n1];
	int R[n2];
	for(i=0;i<n1;i++){
		L[i]=a[l+i]; 
	} 
	for(j=0;j<n2;j++){
		R[j]=a[mid+j+1]; 
	} 
	i=0;j=0;k=l; 
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++; 
		}
		k++;
	} 
	while(i<n1){
		a[k]=L[i];
		k++;
		i++; 
	} 
	while(j<n2){
		a[k]=R[j];
		k++;
		j++; 
	} 
} 
void mergeSort(int a[],int l, int r){
	if(l<r){
		int mid=l+(r-l)/2; 
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r); 
		merge(a,l,mid,r); 
	} 
} 
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],b[k];
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		for(int i=0;i<k;i++){
			cin>>b[i]; 
		} 
		
		int x=n+k;
		int c[x]; 
		for(int i=0;i<x;i++){
			if(i<n) c[i]=a[i];
			else c[i]=b[i-n]; 
		} 
		mergeSort(c,0,x-1);
		for(int i=0;i<x;i++){
			cout<<c[i]<<" "; 
		} 
		cout<<endl; 
	} 	
	return 0; 
}
