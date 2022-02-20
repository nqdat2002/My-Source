#include<stdio.h>
int cl(long long n){
	if(n%2==0) return 1;
	else return 0;
}
int main(){
	long long r,c;
	long x;
	scanf("%lld%lld",&r,&c);
	if(c==1){
		if(cl(r)==1){
			x=r/2;
			printf("%lld",10*(x-1)+1);
		}
		else{
			x=r/2;
			printf("%lld",10*x);
		}
	}
	else if(c==2){
		if(cl(r)==1){
			x=r/2;
			printf("%lld",10*(x-1)+3);
		}
		else{
			x=r/2;
			printf("%lld",10*x+2);
		}
	}
	else if(c==3){
		if(cl(r)==1){
			x=r/2;
			printf("%lld",10*(x-1)+5);
		}
		else{
			x=r/2;
			printf("%lld",10*x+4);
		}
	}
	else if(c==4){
		if(cl(r)==1){
			x=r/2;
			printf("%lld",10*(x-1)+7);
		}
		else{
			x=r/2;
			printf("%lld",10*x+6);
		}
	}
	else{
		if(cl(r)==1){
			x=r/2;
			printf("%lld",(long long)10*(x-1)+9);
		}
		else{
			x=r/2;
			printf("%lld",10*x+8);
		}
	}
}
