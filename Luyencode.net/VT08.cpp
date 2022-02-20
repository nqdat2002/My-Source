#include<stdio.h>
#include<math.h>
int main(){
	int a[1000];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	for(i=0;i<n;i++){
	if(i%2==1)
        a[i]+=abs(a[i+1]-a[i-1]);
	if(n%2==0)
        a[n]=0;
	}
	for(i=0; i<n;i++)
        printf("%d ",a[i]);
	return 0;
}