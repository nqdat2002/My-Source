#include<stdio.h>
int main(){
	int a[3];
	for(int i=0;i<3;i++)
		cin >> a[i];
	for(int i=0;i<3;i++)
		for(int j=i+1;j<3;j++)
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			
	int p=a[2]-a[1];
	int q=a[1]-a[0];
	if(q==p) cout << a[2]+p;
	else{
		if(p>q){
			cout << a[2]-q;			
		}
		else cout << a[0]+p;
	}
	return 0;
}
