#include<stdio.h>
int main(){
	int a[100005],b[100005],c[100005]={0};
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(b[j]==a[i]){
				c[j]=1;
				break;
			}
			else{
				c[j]=0;
				continue;
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%d",c[i]);
	}
}
