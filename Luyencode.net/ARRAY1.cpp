#include<stdio.h>
int n;
int a[105];
void sum(int a[],int n){
	long long summ=0;
	for(int i=0;i<n;i++){
		summ=summ+a[i];
	}
	printf("%lld ",summ);
}
void demduong(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]>0) dem++;
	}
	printf("%d ",dem);
}
void sochan(int a[],int n){
	int c=0,k;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			k=i;
			c++;
			break;
		}
	}
	if(c!=0) printf("%d",a[k]);
	else printf("0");
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum(a,n);
	demduong(a,n);
	sochan(a,n);
	return 0;
}
