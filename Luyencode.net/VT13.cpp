#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void tim(int a[], int n){
	int c,b,i;
	long max=a[0]+a[1];
	for(i=0;i<n-1;i++){
		if(a[i]+a[i+1]>max )
		{
			max=a[i]+a[i+1];
			c = a[i];
			b = a[i+1];
		}
		else if(a[i]+a[i+1]== max){
			if(a[i]>c)
			{
				c = a[i]; 
				b = a[i+1];
			}
		}
	}
	if(c+b<a[n-1]+a[0])
		printf("%d %d",a[n-1],a[0]);
	else
		printf("%d %d",c,b);
}
int main(){
	int a[10000],n;
	scanf("%d",&n);
	nhap(a,n);
	tim(a,n);
	return 0;
}