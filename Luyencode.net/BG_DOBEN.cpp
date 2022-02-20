#include<stdio.h>
#include<math.h>
int dem(long long int n){
	int x=0;
	while(n>0){
		int i=n%10;
		n/=10;
		x++;
	}
	return x;
}
int main(){
	long long int n;
	scanf("%lli",&n);
	int x=dem(n);
	while(x>=1){
		int i=n%10;
		n=n/10+i;
		x--;
	}
	printf("%d",n);	
	return 0;
}
