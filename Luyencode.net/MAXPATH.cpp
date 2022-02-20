#include<stdio.h>
#include<math.h>
#define min -1000
int max(int a,int b){
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	return a,b;
}
int main(){
	int m,n,i,j;
	int kq=0;
	int a[200][200];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<=n;j++){
		a[0][j]=a[m+1][j]=min;
	}
	for(j=2;j<=n;j++){
		for(i=1;i<=m;i++)
			a[i][j]+=max(a[i-1][j-1],max(a[i][j-1],a[i+1][j-1]));
			kq=a[1][n];
	}
	for(i=2;i<=m;i++){
		kq=max(kq,a[i][n]);
	}
	printf("%d",kq);
	return 0;
}
