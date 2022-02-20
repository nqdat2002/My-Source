#include<stdio.h>
int main(){
	int n,i,j,k,h,max,min;
	int a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	int mx=a[0];
	for(i=1;i<n;i++){
			if(a[i]>max){
			k=i;	
			max=a[i];
		}
	}
	min=a[0];
	int mn=a[0];
	for(j=1;j<n;j++){
		if(a[j]<min){
		min=a[j];
		h=j;
		}
	}
	if(mn==min) printf("%d 1 ",mn);
	else printf("%d %d ",min,h+1);
	if(mx==max) printf("%d 1",mx);
	else printf("%d %d",max,k+1);
}