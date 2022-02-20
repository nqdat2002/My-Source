#include<stdio.h>
char find(int a[],int n,int x){
	int i;
	for(i=0;i<n;i++)
		if(x==a[i])
		return 1;
	return 0;
}
int main(){
    int n,x;
    int a[n];
    
    scanf("%d %d",&n,&x);
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(find(a,n,x)==1) printf("YES");
    else printf("NO");
    return 0;
}