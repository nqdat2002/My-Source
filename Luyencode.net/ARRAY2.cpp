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
void demchan(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) dem++;
	}
	printf("%d ",dem);
}
void soduong(int a[],int n){
	int c=0,k;
	for(int i=n-1;i>=0;i--){
		if(a[i]>0){
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
	demchan(a,n);
	soduong(a,n);
	return 0;
}
