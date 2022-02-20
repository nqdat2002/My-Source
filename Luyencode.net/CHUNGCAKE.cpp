#include<stdio.h>
#define mx 2010
int main(){
	int n,m,i,j,k;
	int a[mx],b[mx][mx];
	int result=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    b[0][0]=1;
    for(i=1;i<=n;i++){
        for(j=0;j<=m;j++){
            b[i][j]=b[i-1][j];
            if(a[i]<=j){
            b[i][j]=b[i][j] || b[i-1][j-a[i]];
            }
        }
    }
    for(i=0;i<=m;i++)
        if (b[n][i]==1) result = i;
    printf("%d",result);
    return 0;
}
