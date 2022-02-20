#include<stdio.h>
int main(){
	int n,i,j,m=0;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(2*a[j]<a[i]) m++;
		}
	}	
	printf("%d",m);
}