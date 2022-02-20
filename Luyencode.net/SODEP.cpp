#include<stdio.h>
#include<stdbool.h>
int tong(int n){
	int m=n,sum=0;
	while(n>0){
		int i=n%10;
		sum=sum+i;
		n/=10;
	}
	if (sum%10==0) return 1;
	else return 0;
}
bool thuannghich(int n) {
	int m = n;
	int sum = 0;
	while (n != 0) {
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == m) {
		return true;
	}
	else return false;
}
int main(){
	int a,b;	
	while(scanf("%d%d",&a,&b)!=-1){
		int dem=0;
		for(int i=a;i<=b;i++){
			if(tong(i)==1&&thuannghich(i)==true)
			dem++;
			}
		printf("%d\n",dem);
	}
		return 0;
	
}