#include<stdio.h>
int main(){
	int n,i,dem=0;
	int a[100005];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]) dem++;
		}
	printf("%d",dem);
	return 0;
}