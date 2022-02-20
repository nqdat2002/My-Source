#include<stdio.h>
int demso(int x){
	int dem=0;
	while(x>0){
		if(x%2!=0&&x%5==0){
			dem++;
		}
		x/=10;
	}
	return dem;
}
int main() {
	int a,b,i;
	scanf("%d%d",&a,&b);
	int dem=0;
	for (i=a;i<=b;i++){
		dem=dem+demso(i);
	}
	printf("%d",dem);
	return 0; 
}