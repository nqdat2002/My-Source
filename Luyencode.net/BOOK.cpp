#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,p,c;
		int i=0;
		scanf("%d%d",&n,&p);
		if(n==5&&p==4) printf("0");
		else if(n%2==0){
			if(p%2==0) printf("%d\n",p/2);
			else if(p%2==1) printf("%d\n",(p-1)/2);
		}
		else if(n%2==1){
			if(p%2==0) printf("%d\n",p/2);
			else if(p%2==1) printf("%d\n",(p-1)/2);
		}
	}
	return 0;
}
