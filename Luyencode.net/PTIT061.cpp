#include <iostream>
#include <string.h>
#include <math.h>
//huygamcha
using namespace std;
int partition(int *a,int low, int high){
	int pivot=high;
	int left=low;
	int right=high-1;
	while (true){
		while (left<=right && a[left]<a[pivot]) left++;
		while (right>=left && a[right]>a[pivot]) right--;
		if (left>=right) break;
		swap(a[left],a[right]);
		left++;
		right--;
	}
	swap(a[left],a[pivot]);
	return left;
}
void quicksort(int *a,int low,int high){
	if (low<high){
		int pi=partition(a,low,high);
		
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}


int main(){
	int n;
	int j=0,z=0;
	cin>>n;
	int b[100001],c[100001],d[10001];
	for (int i=0;i<n;i++){
		string s;
		cin>>s;

	
		int a[s.length()+1];
	if (int(s[0])!=45){
	int k=0;
		   for (int i=0;i<s.length();i++) a[i]=int(s[i]-48);
		   quicksort(a,0,s.length()-1);
		    for (int i=s.length()-1;i>=0;i--) k=k*10+a[i];
		    b[j]=k;
		    j++;
		}
		else {
			int k=0;
			int po=9,pu=1;
			for (int i=0;i<s.length();i++) {
			a[i]=int(s[i+1]-48);
			if (a[i]>0&&a[i]<po) {
				po=a[i];
			}
		}

		
		   quicksort(a,0,s.length()-2);
		 int b;
		 k=po;
		    for (int i=0;i<s.length()-1;i++){
		if (po==a[i]&&pu==1)	pu=0;
		else k=k*10+a[i];
		}
		
		 
		    c[z]=k;
		    z++;
		    
		}
	}
	quicksort(b,0,j-1);
	quicksort(c,0,z-1);
	for (int i=j-1;i>=0;i--) cout<<b[i]<<" ";
	for (int i=0;i<z;i++) cout<<-c[i]<<" ";
}
