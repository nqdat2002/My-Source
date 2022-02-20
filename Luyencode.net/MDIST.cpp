#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,d1,d2;
	int a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int max=abs(a[0]-a[1])+abs(b[0]-b[1]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(max<abs(a[i]-a[j])+abs(b[i]-b[j])){
				max=abs(a[i]-a[j])+abs(b[i]-b[j]);
			}
		}
	}
	printf("%d",max);
	
	
}
