#include<stdio.h>
int main(){
	int n;
	int i,j,a[100];
	int sum1=0,sum2=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	if(n%2==1){
		int k=n/2;
		for(i=1;i<=k;i++){
			sum1+=a[i];
		}
		for(i=k+1;i<=n;i++){
			sum2+=a[i];
		}
		printf("%d",sum2-sum1);
	}
	else{
		for(i=1;i<=n/2;i++){
			sum1+=a[i];
		}
		for(i=n/2+1;i<=n;i++){
			sum2+=a[i];
		}
		printf("%d",sum2-sum1);
	}
}
