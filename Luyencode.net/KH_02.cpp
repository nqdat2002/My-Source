#include<stdio.h>
int tc(int n){
	int t;
	t=n%10;
	return t;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p,c;
		scanf("%d",&n);
		int m=n;
		if(n<38) printf("%d\n",n);
		else if(n>=38&&n%5==0) printf("%d\n",n);
		else if(n>=38){
			p=n%5;
			if(tc(n)>=3&&tc(n)<5) printf("%d\n",m-tc(n)+5);
			else if(tc(n)>5&&tc(n)<=7||tc(n)<3) printf("%d\n",n);
			else if(tc(n)>7&&tc(n)<=9) printf("%d\n",m-p+5);
		}
	}
	return 0;
}