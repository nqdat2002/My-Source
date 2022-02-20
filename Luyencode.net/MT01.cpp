#include<stdio.h>
int main(){
	int n,m,i,j,k,h;
	int a[100],b[10][10];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
			//else printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}