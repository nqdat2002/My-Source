#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int partition(int *a,int low,int high){
	int left=low;
	int right=high-1;
	int pivot=high;
	while (true){
		while (left<=right&&a[left]<a[pivot]) left++;
		while (left<=right&&a[right]>a[pivot]) right--;
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
	int b;
	cin >> b;
	while(b--){
		int n,z;
		cin >> n;
		int a[n],d[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			d[i]=a[i];
		}
		quicksort(a,0,n-1);
		int c=2;
		int i=n-2;
		z=a[n-1];
		while (i>=0){
			if (z!=a[i]){
				z=a[i];
				c=c-1;
				if (c==0) {
					cout << a[i] << ' ';
					for (int j=0;j<n;j++) if (d[j]==a[i]){
						cout << j+1 << endl;
						break;
					}
					break;
				}
			}
			i--;
		}
		if (c!=0) cout << "Khong the tim duoc!" << endl;
	}
	return 0;
}
